#ifndef IGNOREDDELETERESULTMESSAGE
#define IGNOREDDELETERESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class IgnoredDeleteResultMessage : public NetworkInterface {
public:
    bool success = false;
    std::string name;
    bool session = false;
    unsigned int protocolId = 7050;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IgnoredDeleteResultMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif