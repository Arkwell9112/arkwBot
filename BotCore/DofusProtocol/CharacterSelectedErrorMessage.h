#ifndef CHARACTERSELECTEDERRORMESSAGE
#define CHARACTERSELECTEDERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterSelectedErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 6248;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterSelectedErrorMessage(ICustomDataInput &input);
};

#endif