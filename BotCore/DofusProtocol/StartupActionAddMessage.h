#ifndef STARTUPACTIONADDMESSAGE
#define STARTUPACTIONADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "StartupActionAddObject.h"

class StartupActionAddMessage : public NetworkInterface {
public:
    StartupActionAddObject newAction;
    unsigned int protocolId = 7331;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StartupActionAddMessage(ICustomDataInput &input);
};

#endif