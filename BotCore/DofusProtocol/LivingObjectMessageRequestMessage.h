#ifndef LIVINGOBJECTMESSAGEREQUESTMESSAGE
#define LIVINGOBJECTMESSAGEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class LivingObjectMessageRequestMessage : public NetworkInterface {
public:
    unsigned int msgId = 0;
    std::vector<std::string> parameters;
    unsigned int livingObject = 0;
    unsigned int protocolId = 8775;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LivingObjectMessageRequestMessage(ICustomDataInput &input);

    void _msgIdFunc(ICustomDataInput &input);

    void _parametersFunc(ICustomDataInput &input);

    void _livingObjectFunc(ICustomDataInput &input);
};

#endif