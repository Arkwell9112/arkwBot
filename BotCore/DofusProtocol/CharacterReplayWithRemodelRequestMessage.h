#ifndef CHARACTERREPLAYWITHREMODELREQUESTMESSAGE
#define CHARACTERREPLAYWITHREMODELREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "RemodelingInformation.h"
#include "CharacterReplayRequestMessage.h"

class CharacterReplayWithRemodelRequestMessage : public CharacterReplayRequestMessage {
public:
    RemodelingInformation remodel;
    unsigned int protocolId = 509;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterReplayWithRemodelRequestMessage(ICustomDataInput &input);
};

#endif