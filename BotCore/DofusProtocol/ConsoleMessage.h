#ifndef CONSOLEMESSAGE
#define CONSOLEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class ConsoleMessage : public NetworkInterface {
public:
    unsigned int type = 0;
    std::string content;
    unsigned int protocolId = 6538;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ConsoleMessage(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);
};

#endif