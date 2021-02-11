#ifndef IDOLSELECTEDMESSAGE
#define IDOLSELECTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Idol.h"

class IdolSelectedMessage : public NetworkInterface {
public:
    unsigned int idolId = 0;
    bool activate = false;
    bool party = false;
    unsigned int protocolId = 9412;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolSelectedMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _idolIdFunc(ICustomDataInput &input);
};

#endif