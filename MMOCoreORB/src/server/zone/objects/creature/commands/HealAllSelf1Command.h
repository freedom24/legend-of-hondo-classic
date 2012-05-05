/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

#ifndef HEALALLSELF1COMMAND_H_
#define HEALALLSELF1COMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class HealAllSelf1Command : public QueueCommand {
public:

	HealAllSelf1Command(const String& name, ZoneProcessServer* server)
		: QueueCommand(name, server) {

	}

	bool canPerformSkill(CreatureObject* creature) {
		if ((!creature->hasDamage(CreatureAttribute::HEALTH)) && (!creature->hasDamage(CreatureAttribute::ACTION)) && (!creature->hasDamage(CreatureAttribute::MIND))) {
			creature->sendSystemMessage("@jedi_spam:no_damage_heal_self"); // You have no damage of that type.
			return false;
		}
				
		if (creature->isProne()) {
			creature->sendSystemMessage("You cannot use Force Heal All Self while prone.");
			return false;
		}

		if (creature->isMeditating()) {
			creature->sendSystemMessage("You cannot use Force Heal All Self while Meditating.");
			return false;
		}

		if (creature->isRidingCreature()) {
			creature->sendSystemMessage("You cannot do that while Riding a Creature.");
			return false;
		}

		if (creature->isMounted()) {
			creature->sendSystemMessage("You cannot do that while Driving a Vehicle.");
			return false;
		}
		
		return true;
	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;

		if (isWearingArmor(creature)) {
			return NOJEDIARMOR;
		}

		ManagedReference<PlayerObject*> playerObject = creature->getPlayerObject();


		if (playerObject != NULL) {
			if (playerObject->getForcePower() <= 340) {
				creature->sendSystemMessage("@jedi_spam:no_force_power");
				return GENERALERROR;
			}

		// At this point, the player has enough Force... Can they perform skill?

		if (!canPerformSkill(creature))
				return GENERALERROR;


		int forceCost = 0;

		// Lets see how much healing they are doing.

		uint32 healthHealed = creature->healDamage(creature, CreatureAttribute::HEALTH, 500);
		uint32 actionHealed = creature->healDamage(creature, CreatureAttribute::ACTION, 500);
		uint32 mindHealed = creature->healDamage(creature, CreatureAttribute::MIND, 500);

			
		forceCost = MIN(((healthHealed + actionHealed + mindHealed) / 4), 340);

			
		// Send system message(s).

		if (healthHealed > 0){
			StringIdChatParameter message1("jedi_spam", "heal_self");
			message1.setDI(healthHealed);
			message1.setTO("@jedi_spam:health_damage");
			creature->sendSystemMessage(message1);
		}


		if (actionHealed > 0){
			StringIdChatParameter message2("jedi_spam", "heal_self");
			message2.setDI(actionHealed);
			message2.setTO("@jedi_spam:action_damage");
			creature->sendSystemMessage(message2);
		}

		if (mindHealed > 0){
			StringIdChatParameter message3("jedi_spam", "heal_self");
			message3.setDI(mindHealed);
			message3.setTO("@jedi_spam:mind_damage");
			creature->sendSystemMessage(message3);			
		}

			
		// Play client effect, and deduct Force Power.


		creature->playEffect("clienteffect/pl_force_heal_self.cef", "");
		playerObject->setForcePower(playerObject->getForcePower() - forceCost);
			
		return SUCCESS;
		}

		return GENERALERROR;
	}


	float getCommandDuration(CreatureObject* object) {
		return defaultTime * 3.0;
	}

};

#endif //HEALALLSELF1COMMAND_H_
