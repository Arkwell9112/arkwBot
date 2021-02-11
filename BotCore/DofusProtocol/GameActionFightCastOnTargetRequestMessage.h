#ifndef GAMEACTIONFIGHTCASTONTARGETREQUESTMESSAGE
#define GAMEACTIONFIGHTCASTONTARGETREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameActionFightCastOnTargetRequestMessage : public NetworkInterface {
public:
    unsigned int spellId = 0;
    double targetId = 0;
    unsigned int protocolId = 2346;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightCastOnTargetRequestMessage(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif