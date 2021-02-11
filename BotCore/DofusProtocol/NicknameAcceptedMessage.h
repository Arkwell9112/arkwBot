#ifndef NICKNAMEACCEPTEDMESSAGE
#define NICKNAMEACCEPTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NicknameAcceptedMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2323;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NicknameAcceptedMessage(ICustomDataInput &input);
};

#endif