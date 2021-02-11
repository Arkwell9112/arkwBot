#ifndef ADMINCOMMANDMESSAGE
#define ADMINCOMMANDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class AdminCommandMessage : public NetworkInterface {
public:
    std::string content;
    unsigned int protocolId = 8259;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AdminCommandMessage(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);
};

#endif