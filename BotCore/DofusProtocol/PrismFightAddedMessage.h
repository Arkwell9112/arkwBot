#ifndef PRISMFIGHTADDEDMESSAGE
#define PRISMFIGHTADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "PrismFightersInformation.h"

class PrismFightAddedMessage : public NetworkInterface {
public:
    PrismFightersInformation fight;
    unsigned int protocolId = 4183;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismFightAddedMessage(ICustomDataInput &input);
};

#endif