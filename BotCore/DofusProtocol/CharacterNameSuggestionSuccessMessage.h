#ifndef CHARACTERNAMESUGGESTIONSUCCESSMESSAGE
#define CHARACTERNAMESUGGESTIONSUCCESSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class CharacterNameSuggestionSuccessMessage : public NetworkInterface {
public:
    std::string suggestion;
    unsigned int protocolId = 3770;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterNameSuggestionSuccessMessage(ICustomDataInput &input);

    void _suggestionFunc(ICustomDataInput &input);
};

#endif