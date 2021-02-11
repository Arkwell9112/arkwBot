#ifndef CONSOLECOMMANDSLISTMESSAGE
#define CONSOLECOMMANDSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class ConsoleCommandsListMessage : public NetworkInterface {
public:
    std::vector<std::string> aliases;
    std::vector<std::string> args;
    std::vector<std::string> descriptions;
    unsigned int protocolId = 9434;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ConsoleCommandsListMessage(ICustomDataInput &input);

    void _aliasesFunc(ICustomDataInput &input);

    void _argsFunc(ICustomDataInput &input);

    void _descriptionsFunc(ICustomDataInput &input);
};

#endif