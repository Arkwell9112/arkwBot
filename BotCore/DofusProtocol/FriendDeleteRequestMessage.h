#ifndef FRIENDDELETEREQUESTMESSAGE
#define FRIENDDELETEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendDeleteRequestMessage : public NetworkInterface {
public:
    unsigned int accountId = 0;
    unsigned int protocolId = 2238;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendDeleteRequestMessage(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);
};

#endif