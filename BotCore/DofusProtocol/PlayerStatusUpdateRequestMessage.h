#ifndef PLAYERSTATUSUPDATEREQUESTMESSAGE
#define PLAYERSTATUSUPDATEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "PlayerStatus.h"

class PlayerStatusUpdateRequestMessage : public NetworkInterface {
public:
    PlayerStatus status;
    unsigned int protocolId = 1006;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PlayerStatusUpdateRequestMessage(ICustomDataInput &input);
};

#endif