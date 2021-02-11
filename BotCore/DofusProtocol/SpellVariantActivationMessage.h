#ifndef SPELLVARIANTACTIVATIONMESSAGE
#define SPELLVARIANTACTIVATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SpellVariantActivationMessage : public NetworkInterface {
public:
    unsigned int spellId = 0;
    bool result = false;
    unsigned int protocolId = 8645;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpellVariantActivationMessage(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif