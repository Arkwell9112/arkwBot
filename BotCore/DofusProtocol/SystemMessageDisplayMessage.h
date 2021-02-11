#ifndef SYSTEMMESSAGEDISPLAYMESSAGE
#define SYSTEMMESSAGEDISPLAYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class SystemMessageDisplayMessage : public NetworkInterface {
public:
    bool hangUp = false;
    unsigned int msgId = 0;
    std::vector<std::string> parameters;
    unsigned int protocolId = 1498;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SystemMessageDisplayMessage(ICustomDataInput &input);

    void _hangUpFunc(ICustomDataInput &input);

    void _msgIdFunc(ICustomDataInput &input);

    void _parametersFunc(ICustomDataInput &input);
};

#endif