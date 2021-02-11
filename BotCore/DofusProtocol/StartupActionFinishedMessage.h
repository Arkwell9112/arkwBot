#ifndef STARTUPACTIONFINISHEDMESSAGE
#define STARTUPACTIONFINISHEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StartupActionFinishedMessage : public NetworkInterface {
public:
    bool success = false;
    unsigned int actionId = 0;
    bool automaticAction = false;
    unsigned int protocolId = 7120;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StartupActionFinishedMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _actionIdFunc(ICustomDataInput &input);
};

#endif