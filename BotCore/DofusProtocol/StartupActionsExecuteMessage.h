#ifndef STARTUPACTIONSEXECUTEMESSAGE
#define STARTUPACTIONSEXECUTEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StartupActionsExecuteMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7278;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StartupActionsExecuteMessage(ICustomDataInput &input);
};

#endif