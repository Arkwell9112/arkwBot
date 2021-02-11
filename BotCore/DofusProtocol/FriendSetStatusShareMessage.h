#ifndef FRIENDSETSTATUSSHAREMESSAGE
#define FRIENDSETSTATUSSHAREMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendSetStatusShareMessage : public NetworkInterface {
public:
    bool share = false;
    unsigned int protocolId = 6968;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendSetStatusShareMessage(ICustomDataInput &input);

    void _shareFunc(ICustomDataInput &input);
};

#endif