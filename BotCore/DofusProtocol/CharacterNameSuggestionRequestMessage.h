#ifndef CHARACTERNAMESUGGESTIONREQUESTMESSAGE
#define CHARACTERNAMESUGGESTIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterNameSuggestionRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 5163;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterNameSuggestionRequestMessage(ICustomDataInput &input);
};

#endif