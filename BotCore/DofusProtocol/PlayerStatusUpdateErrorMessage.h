#ifndef PLAYERSTATUSUPDATEERRORMESSAGE
#define PLAYERSTATUSUPDATEERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "PlayerStatus.h"

class PlayerStatusUpdateErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9758;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PlayerStatusUpdateErrorMessage(ICustomDataInput &input);
};

#endif