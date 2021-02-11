#ifndef CHARACTERSELECTIONWITHREMODELMESSAGE
#define CHARACTERSELECTIONWITHREMODELMESSAGE

#include "../IO/ICustomDataInput.h"
#include "RemodelingInformation.h"
#include "CharacterSelectionMessage.h"

class CharacterSelectionWithRemodelMessage : public CharacterSelectionMessage {
public:
    RemodelingInformation remodel;
    unsigned int protocolId = 9503;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterSelectionWithRemodelMessage(ICustomDataInput &input);
};

#endif