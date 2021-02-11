#ifndef IDOLSELECTREQUESTMESSAGE
#define IDOLSELECTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Idol.h"

class IdolSelectRequestMessage : public NetworkInterface {
public:
    unsigned int idolId = 0;
    bool activate = false;
    bool party = false;
    unsigned int protocolId = 8838;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolSelectRequestMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _idolIdFunc(ICustomDataInput &input);
};

#endif