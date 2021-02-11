#ifndef CHARACTERLEVELUPMESSAGE
#define CHARACTERLEVELUPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterLevelUpMessage : public NetworkInterface {
public:
    unsigned int newLevel = 0;
    unsigned int protocolId = 828;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterLevelUpMessage(ICustomDataInput &input);

    void _newLevelFunc(ICustomDataInput &input);
};

#endif