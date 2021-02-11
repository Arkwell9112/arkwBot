#ifndef CHARACTERLEVELUPINFORMATIONMESSAGE
#define CHARACTERLEVELUPINFORMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "CharacterLevelUpMessage.h"

class CharacterLevelUpInformationMessage : public CharacterLevelUpMessage {
public:
    std::string name;
    double id = 0;
    unsigned int protocolId = 6219;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterLevelUpInformationMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif