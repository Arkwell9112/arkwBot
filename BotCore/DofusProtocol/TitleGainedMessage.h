#ifndef TITLEGAINEDMESSAGE
#define TITLEGAINEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TitleGainedMessage : public NetworkInterface {
public:
    unsigned int titleId = 0;
    unsigned int protocolId = 9232;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TitleGainedMessage(ICustomDataInput &input);

    void _titleIdFunc(ICustomDataInput &input);
};

#endif