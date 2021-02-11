#ifndef GAMEROLEPLAYDELAYEDACTIONFINISHEDMESSAGE
#define GAMEROLEPLAYDELAYEDACTIONFINISHEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayDelayedActionFinishedMessage : public NetworkInterface {
public:
    double delayedCharacterId = 0;
    unsigned int delayTypeId = 0;
    unsigned int protocolId = 6398;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayDelayedActionFinishedMessage(ICustomDataInput &input);

    void _delayedCharacterIdFunc(ICustomDataInput &input);

    void _delayTypeIdFunc(ICustomDataInput &input);
};

#endif