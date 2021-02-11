#ifndef SPOUSEINFORMATIONSMESSAGE
#define SPOUSEINFORMATIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "FriendSpouseInformations.h"

class SpouseInformationsMessage : public NetworkInterface {
public:
    FriendSpouseInformations spouse;
    unsigned int protocolId = 3852;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpouseInformationsMessage(ICustomDataInput &input);
};

#endif