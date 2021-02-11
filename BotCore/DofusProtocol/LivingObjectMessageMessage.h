#ifndef LIVINGOBJECTMESSAGEMESSAGE
#define LIVINGOBJECTMESSAGEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class LivingObjectMessageMessage : public NetworkInterface {
public:
    unsigned int msgId = 0;
    unsigned int timeStamp = 0;
    std::string owner;
    unsigned int objectGenericId = 0;
    unsigned int protocolId = 3375;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LivingObjectMessageMessage(ICustomDataInput &input);

    void _msgIdFunc(ICustomDataInput &input);

    void _timeStampFunc(ICustomDataInput &input);

    void _ownerFunc(ICustomDataInput &input);

    void _objectGenericIdFunc(ICustomDataInput &input);
};

#endif