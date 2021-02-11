#ifndef SIMPLECHARACTERCHARACTERISTICFORPRESET
#define SIMPLECHARACTERCHARACTERISTICFORPRESET

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class SimpleCharacterCharacteristicForPreset : public NetworkInterface {
public:
    std::string keyword;
    int base = 0;
    int additionnal = 0;
    unsigned int protocolId = 1047;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SimpleCharacterCharacteristicForPreset(ICustomDataInput &input);

    void _keywordFunc(ICustomDataInput &input);

    void _baseFunc(ICustomDataInput &input);

    void _additionnalFunc(ICustomDataInput &input);
};

#endif