#ifndef FRIENDADDFAILUREMESSAGE
#define FRIENDADDFAILUREMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendAddFailureMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 757;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendAddFailureMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif