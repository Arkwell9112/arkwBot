#ifndef FRIENDDELETERESULTMESSAGE
#define FRIENDDELETERESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class FriendDeleteResultMessage : public NetworkInterface {
public:
    bool success = false;
    std::string name;
    unsigned int protocolId = 2874;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendDeleteResultMessage(ICustomDataInput &input);

    void _successFunc(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif