#ifndef MAPCOMPLEMENTARYINFORMATIONSDATAMESSAGE
#define MAPCOMPLEMENTARYINFORMATIONSDATAMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameRolePlayActorInformations.h"
#include "FightStartingPositions.h"
#include "FightCommonInformations.h"
#include "StatedElement.h"
#include "MapObstacle.h"
#include "InteractiveElement.h"
#include "HouseInformations.h"

class MapComplementaryInformationsDataMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    double mapId = 0;
    std::vector<HouseInformations> houses;
    std::vector<GameRolePlayActorInformations> actors;
    std::vector<InteractiveElement> interactiveElements;
    std::vector<StatedElement> statedElements;
    std::vector<MapObstacle> obstacles;
    std::vector<FightCommonInformations> fights;
    bool hasAggressiveMonsters = false;
    FightStartingPositions fightStartPositions;
    unsigned int protocolId = 2291;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapComplementaryInformationsDataMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _housesFunc(ICustomDataInput &input);

    void _actorsFunc(ICustomDataInput &input);

    void _interactiveElementsFunc(ICustomDataInput &input);

    void _statedElementsFunc(ICustomDataInput &input);

    void _obstaclesFunc(ICustomDataInput &input);

    void _fightsFunc(ICustomDataInput &input);

    void _hasAggressiveMonstersFunc(ICustomDataInput &input);
};

#endif