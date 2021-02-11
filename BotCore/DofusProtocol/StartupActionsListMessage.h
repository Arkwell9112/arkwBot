#ifndef STARTUPACTIONSLISTMESSAGE
#define STARTUPACTIONSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "StartupActionAddObject.h"

class StartupActionsListMessage : public NetworkInterface {
public:
    std::vector<StartupActionAddObject> actions;
    unsigned int protocolId = 5089;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StartupActionsListMessage(ICustomDataInput &input);

    void _actionsFunc(ICustomDataInput &input);
};

#endif