#ifndef JOBCRAFTERDIRECTORYENTRYPLAYERINFO
#define JOBCRAFTERDIRECTORYENTRYPLAYERINFO

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "PlayerStatus.h"

class JobCrafterDirectoryEntryPlayerInfo : public NetworkInterface {
public:
    double playerId = 0;
    std::string playerName;
    int alignmentSide = 0;
    int breed = 0;
    bool sex = false;
    bool isInWorkshop = false;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    bool canCraftLegendary = false;
    PlayerStatus status;
    unsigned int protocolId = 640;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryEntryPlayerInfo(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);

    void _alignmentSideFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _isInWorkshopFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _canCraftLegendaryFunc(ICustomDataInput &input);
};

#endif