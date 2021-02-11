#ifndef CHARACTERSPELLMODIFICATION
#define CHARACTERSPELLMODIFICATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterBaseCharacteristic.h"

class CharacterSpellModification : public NetworkInterface {
public:
    unsigned int modificationType = 0;
    unsigned int spellId = 0;
    CharacterBaseCharacteristic value;
    unsigned int protocolId = 8874;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterSpellModification(ICustomDataInput &input);

    void _modificationTypeFunc(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);
};

#endif