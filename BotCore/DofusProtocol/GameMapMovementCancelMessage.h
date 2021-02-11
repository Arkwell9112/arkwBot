#ifndef GAMEMAPMOVEMENTCANCELMESSAGE
#define GAMEMAPMOVEMENTCANCELMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameMapMovementCancelMessage : public NetworkInterface {
public:
    unsigned int cellId = 0;
    unsigned int protocolId = 4035;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameMapMovementCancelMessage(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif