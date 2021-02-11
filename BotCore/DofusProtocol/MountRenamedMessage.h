#ifndef MOUNTRENAMEDMESSAGE
#define MOUNTRENAMEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class MountRenamedMessage : public NetworkInterface {
public:
    int mountId = 0;
    std::string name;
    unsigned int protocolId = 5372;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountRenamedMessage(ICustomDataInput &input);

    void _mountIdFunc(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif