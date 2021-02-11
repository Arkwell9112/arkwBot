#ifndef ALLIANCEINSIDERINFOREQUESTMESSAGE
#define ALLIANCEINSIDERINFOREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceInsiderInfoRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7385;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceInsiderInfoRequestMessage(ICustomDataInput &input);
};

#endif