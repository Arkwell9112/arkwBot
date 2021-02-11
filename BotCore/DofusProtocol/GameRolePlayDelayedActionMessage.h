#ifndef GAMEROLEPLAYDELAYEDACTIONMESSAGE
#define GAMEROLEPLAYDELAYEDACTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameRolePlayDelayedActionMessage : public NetworkInterface {
public:
    double delayedCharacterId = 0;
    unsigned int delayTypeId = 0;
    double delayEndTime = 0;
    unsigned int protocolId = 4268;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayDelayedActionMessage(ICustomDataInput &input);

    void _delayedCharacterIdFunc(ICustomDataInput &input);

    void _delayTypeIdFunc(ICustomDataInput &input);

    void _delayEndTimeFunc(ICustomDataInput &input);
};

#endif