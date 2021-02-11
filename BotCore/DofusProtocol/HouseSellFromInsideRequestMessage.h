#ifndef HOUSESELLFROMINSIDEREQUESTMESSAGE
#define HOUSESELLFROMINSIDEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "HouseSellRequestMessage.h"

class HouseSellFromInsideRequestMessage : public HouseSellRequestMessage {
public:
    unsigned int protocolId = 6264;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseSellFromInsideRequestMessage(ICustomDataInput &input);
};

#endif