#ifndef NICKNAMEREFUSEDMESSAGE
#define NICKNAMEREFUSEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NicknameRefusedMessage : public NetworkInterface {
public:
    unsigned int reason = 99;
    unsigned int protocolId = 3600;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NicknameRefusedMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif