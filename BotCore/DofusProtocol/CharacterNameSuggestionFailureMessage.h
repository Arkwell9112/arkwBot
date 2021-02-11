#ifndef CHARACTERNAMESUGGESTIONFAILUREMESSAGE
#define CHARACTERNAMESUGGESTIONFAILUREMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterNameSuggestionFailureMessage : public NetworkInterface {
public:
    unsigned int reason = 1;
    unsigned int protocolId = 4650;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterNameSuggestionFailureMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif