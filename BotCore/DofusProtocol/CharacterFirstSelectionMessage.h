#ifndef CHARACTERFIRSTSELECTIONMESSAGE
#define CHARACTERFIRSTSELECTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "CharacterSelectionMessage.h"

class CharacterFirstSelectionMessage : public CharacterSelectionMessage {
public:
    bool doTutorial = false;
    unsigned int protocolId = 3197;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterFirstSelectionMessage(ICustomDataInput &input);

    void _doTutorialFunc(ICustomDataInput &input);
};

#endif