#ifndef CHARACTERSLISTREQUESTMESSAGE
#define CHARACTERSLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharactersListRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9988;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharactersListRequestMessage(ICustomDataInput &input);
};

#endif