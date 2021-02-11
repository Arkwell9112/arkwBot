#ifndef IDOLPARTYREGISTERREQUESTMESSAGE
#define IDOLPARTYREGISTERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Idol.h"

class IdolPartyRegisterRequestMessage : public NetworkInterface {
public:
    bool reg = false;
    unsigned int protocolId = 5528;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolPartyRegisterRequestMessage(ICustomDataInput &input);

    void _registerFunc(ICustomDataInput &input);
};

#endif