#ifndef SPOUSEGETINFORMATIONSMESSAGE
#define SPOUSEGETINFORMATIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SpouseGetInformationsMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1388;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpouseGetInformationsMessage(ICustomDataInput &input);
};

#endif