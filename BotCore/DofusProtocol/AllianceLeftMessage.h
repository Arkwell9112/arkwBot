#ifndef ALLIANCELEFTMESSAGE
#define ALLIANCELEFTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceLeftMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2575;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceLeftMessage(ICustomDataInput &input);
};

#endif