#ifndef PRISMSLISTREGISTERMESSAGE
#define PRISMSLISTREGISTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismsListRegisterMessage : public NetworkInterface {
public:
    unsigned int listen = 0;
    unsigned int protocolId = 5369;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismsListRegisterMessage(ICustomDataInput &input);

    void _listenFunc(ICustomDataInput &input);
};

#endif