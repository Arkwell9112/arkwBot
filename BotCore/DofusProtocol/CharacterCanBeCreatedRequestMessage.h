#ifndef CHARACTERCANBECREATEDREQUESTMESSAGE
#define CHARACTERCANBECREATEDREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterCanBeCreatedRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2476;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterCanBeCreatedRequestMessage(ICustomDataInput &input);
};

#endif