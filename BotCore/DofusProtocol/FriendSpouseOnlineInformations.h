#ifndef FRIENDSPOUSEONLINEINFORMATIONS
#define FRIENDSPOUSEONLINEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "FriendSpouseInformations.h"

class FriendSpouseOnlineInformations : public FriendSpouseInformations {
public:
    double mapId = 0;
    unsigned int subAreaId = 0;
    bool inFight = false;
    bool followSpouse = false;
    unsigned int protocolId = 5625;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendSpouseOnlineInformations(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);
};

#endif