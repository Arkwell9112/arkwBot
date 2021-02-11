#ifndef GAMEACTIONFIGHTCASTREQUESTMESSAGE
#define GAMEACTIONFIGHTCASTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameActionFightCastRequestMessage : public NetworkInterface {
public:
    unsigned int spellId = 0;
    int cellId = 0;
    unsigned int protocolId = 127;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightCastRequestMessage(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif