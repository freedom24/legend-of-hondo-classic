/*
 * SurveyToolSetRangeSuiCallback.h
 *
 *  Created on: Nov 3, 2010
 *      Author: crush
 */

#ifndef SURVEYTOOLSETRANGECALLBACK_H_
#define SURVEYTOOLSETRANGECALLBACK_H_


#include "server/zone/objects/tangible/tool/SurveyTool.h"
#include "server/zone/objects/player/sui/SuiCallback.h"

class SurveyToolSetRangeSuiCallback : public SuiCallback {
public:
	SurveyToolSetRangeSuiCallback(ZoneServer* server)
		: SuiCallback(server) {
	}

	void run(CreatureObject* player, SuiBox* suiBox, bool cancelPressed, Vector<UnicodeString>* args) {
		if (cancelPressed)
			return;

		if (args->size() < 1)
			return;

		PlayerObject* ghost = player->getPlayerObject();

		ManagedReference<SurveyTool*> surveyTool = ghost->getSurveyTool();

		if (surveyTool == NULL)
			return;

		int range = 64 * Integer::valueOf(args->get(0).toString()) + 64;

		if (range > 512)
			range = 1024;

		Locker _lock(surveyTool);
		surveyTool->setRange(range);
	}
};

#endif /* SURVEYTOOLSETRANGECALLBACK_H_ */
