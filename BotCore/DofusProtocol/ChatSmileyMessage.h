#ifndef CHATSMILEYMESSAGE
#define CHATSMILEYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChatSmileyMessage : public NetworkInterface {
public:
    double entityId = 0;
    unsigned int smileyId = 0;
    unsigned int accountId = 0;
    unsigned int protocolId = 6349;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatSmileyMessage(ICustomDataInput &input);

    void _entityIdFunc(ICustomDataInput &input);

    void _smileyIdFunc(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);
};

#endif