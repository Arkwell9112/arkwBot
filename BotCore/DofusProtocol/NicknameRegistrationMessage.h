#ifndef NICKNAMEREGISTRATIONMESSAGE
#define NICKNAMEREGISTRATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NicknameRegistrationMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4339;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NicknameRegistrationMessage(ICustomDataInput &input);
};

#endif