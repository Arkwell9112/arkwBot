#ifndef MOUNTRENAMEREQUESTMESSAGE
#define MOUNTRENAMEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class MountRenameRequestMessage : public NetworkInterface {
public:
    std::string name;
    int mountId = 0;
    unsigned int protocolId = 4706;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountRenameRequestMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _mountIdFunc(ICustomDataInput &input);
};

#endif