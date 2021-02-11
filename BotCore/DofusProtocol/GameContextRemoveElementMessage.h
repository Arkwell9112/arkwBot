#ifndef GAMECONTEXTREMOVEELEMENTMESSAGE
#define GAMECONTEXTREMOVEELEMENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameContextRemoveElementMessage : public NetworkInterface {
public:
    double id = 0;
    unsigned int protocolId = 3288;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextRemoveElementMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif