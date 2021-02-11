#ifndef CHARACTERSELECTEDFORCEMESSAGE
#define CHARACTERSELECTEDFORCEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterSelectedForceMessage : public NetworkInterface {
public:
    int id = 0;
    unsigned int protocolId = 8738;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterSelectedForceMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif