#ifndef HOUSEINFORMATIONSFORSELL
#define HOUSEINFORMATIONSFORSELL

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>
#include "HouseInformations.h"

class HouseInformationsForSell : public NetworkInterface {
public:
    unsigned int instanceId = 0;
    bool secondHand = false;
    unsigned int modelId = 0;
    std::string ownerName;
    std::string ownerCharacterName;
    int worldX = 0;
    int worldY = 0;
    unsigned int subAreaId = 0;
    int nbRoom = 0;
    int nbChest = 0;
    std::vector<int> skillListIds;
    bool isLocked = false;
    double price = 0;
    unsigned int protocolId = 432;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseInformationsForSell(ICustomDataInput &input);

    void _instanceIdFunc(ICustomDataInput &input);

    void _secondHandFunc(ICustomDataInput &input);

    void _modelIdFunc(ICustomDataInput &input);

    void _ownerNameFunc(ICustomDataInput &input);

    void _ownerCharacterNameFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _nbRoomFunc(ICustomDataInput &input);

    void _nbChestFunc(ICustomDataInput &input);

    void _skillListIdsFunc(ICustomDataInput &input);

    void _isLockedFunc(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);
};

#endif