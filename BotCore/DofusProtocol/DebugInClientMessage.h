#ifndef DEBUGINCLIENTMESSAGE
#define DEBUGINCLIENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class DebugInClientMessage : public NetworkInterface {
public:
    unsigned int level = 0;
    std::string message;
    unsigned int protocolId = 2705;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DebugInClientMessage(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _messageFunc(ICustomDataInput &input);
};

#endif