#ifndef SPELLVARIANTACTIVATIONREQUESTMESSAGE
#define SPELLVARIANTACTIVATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SpellVariantActivationRequestMessage : public NetworkInterface {
public:
    unsigned int spellId = 0;
    unsigned int protocolId = 9742;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpellVariantActivationRequestMessage(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);
};

#endif