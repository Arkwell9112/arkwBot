#ifndef GAMEMAPMOVEMENTCONFIRMMESSAGE
#define GAMEMAPMOVEMENTCONFIRMMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "../Packet.h"

class GameMapMovementConfirmMessage : public NetworkInterface {
public:
    unsigned int protocolId = 8351;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameMapMovementConfirmMessage(ICustomDataInput &input);

    static Packet serialize();
};

#endif