#ifndef CHARACTERSLISTMESSAGE
#define CHARACTERSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "BasicCharactersListMessage.h"

class CharactersListMessage : public BasicCharactersListMessage {
public:
    bool hasStartupActions = false;
    unsigned int protocolId = 6320;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharactersListMessage(ICustomDataInput &input);

    void _hasStartupActionsFunc(ICustomDataInput &input);
};

#endif