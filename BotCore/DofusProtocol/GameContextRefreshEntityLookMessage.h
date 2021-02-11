#ifndef GAMECONTEXTREFRESHENTITYLOOKMESSAGE
#define GAMECONTEXTREFRESHENTITYLOOKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "EntityLook.h"

class GameContextRefreshEntityLookMessage : public NetworkInterface {
public:
    double id = 0;
    EntityLook look;
    unsigned int protocolId = 5844;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextRefreshEntityLookMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif