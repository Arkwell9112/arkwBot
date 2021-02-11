#ifndef GAMECONTEXTCREATEREQUESTMESSAGE
#define GAMECONTEXTCREATEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameContextCreateRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7710;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextCreateRequestMessage(ICustomDataInput &input);
};

#endif