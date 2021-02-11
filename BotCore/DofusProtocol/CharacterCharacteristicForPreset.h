#ifndef CHARACTERCHARACTERISTICFORPRESET
#define CHARACTERCHARACTERISTICFORPRESET

#include "../IO/ICustomDataInput.h"
#include "SimpleCharacterCharacteristicForPreset.h"

class CharacterCharacteristicForPreset : public SimpleCharacterCharacteristicForPreset {
public:
    int stuff = 0;
    unsigned int protocolId = 8510;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterCharacteristicForPreset(ICustomDataInput &input);

    void _stuffFunc(ICustomDataInput &input);
};

#endif