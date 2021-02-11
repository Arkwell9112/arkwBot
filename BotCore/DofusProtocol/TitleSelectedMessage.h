#ifndef TITLESELECTEDMESSAGE
#define TITLESELECTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TitleSelectedMessage : public NetworkInterface {
public:
    unsigned int titleId = 0;
    unsigned int protocolId = 8596;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TitleSelectedMessage(ICustomDataInput &input);

    void _titleIdFunc(ICustomDataInput &input);
};

#endif