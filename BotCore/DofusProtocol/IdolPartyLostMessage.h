#ifndef IDOLPARTYLOSTMESSAGE
#define IDOLPARTYLOSTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Idol.h"

class IdolPartyLostMessage : public NetworkInterface {
public:
    unsigned int idolId = 0;
    unsigned int protocolId = 1149;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolPartyLostMessage(ICustomDataInput &input);

    void _idolIdFunc(ICustomDataInput &input);
};

#endif