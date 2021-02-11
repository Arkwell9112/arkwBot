#ifndef CHATABSTRACTCLIENTMESSAGE
#define CHATABSTRACTCLIENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class ChatAbstractClientMessage : public NetworkInterface {
public:
    std::string content;
    unsigned int protocolId = 7879;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatAbstractClientMessage(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);
};

#endif