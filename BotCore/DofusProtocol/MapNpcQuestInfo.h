#ifndef MAPNPCQUESTINFO
#define MAPNPCQUESTINFO

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameRolePlayNpcQuestFlag.h"

class MapNpcQuestInfo : public NetworkInterface {
public:
    double mapId = 0;
    std::vector<int> npcsIdsWithQuest;
    std::vector<GameRolePlayNpcQuestFlag> questFlags;
    unsigned int protocolId = 3117;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapNpcQuestInfo(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _npcsIdsWithQuestFunc(ICustomDataInput &input);

    void _questFlagsFunc(ICustomDataInput &input);
};

#endif