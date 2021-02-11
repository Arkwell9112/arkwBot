#ifndef TITLESELECTREQUESTMESSAGE
#define TITLESELECTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TitleSelectRequestMessage : public NetworkInterface {
public:
    unsigned int titleId = 0;
    unsigned int protocolId = 333;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TitleSelectRequestMessage(ICustomDataInput &input);

    void _titleIdFunc(ICustomDataInput &input);
};

#endif