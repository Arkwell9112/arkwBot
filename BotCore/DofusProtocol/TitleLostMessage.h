#ifndef TITLELOSTMESSAGE
#define TITLELOSTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TitleLostMessage : public NetworkInterface {
public:
    unsigned int titleId = 0;
    unsigned int protocolId = 7901;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TitleLostMessage(ICustomDataInput &input);

    void _titleIdFunc(ICustomDataInput &input);
};

#endif