#ifndef GAMECONTEXTCREATEERRORMESSAGE
#define GAMECONTEXTCREATEERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameContextCreateErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4176;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextCreateErrorMessage(ICustomDataInput &input);
};

#endif