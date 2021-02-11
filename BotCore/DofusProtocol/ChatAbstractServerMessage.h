#ifndef CHATABSTRACTSERVERMESSAGE
#define CHATABSTRACTSERVERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class ChatAbstractServerMessage : public NetworkInterface {
public:
    unsigned int channel = 0;
    std::string content;
    unsigned int timestamp = 0;
    std::string fingerprint;
    unsigned int protocolId = 4275;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChatAbstractServerMessage(ICustomDataInput &input);

    void _channelFunc(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);

    void _timestampFunc(ICustomDataInput &input);

    void _fingerprintFunc(ICustomDataInput &input);
};

#endif