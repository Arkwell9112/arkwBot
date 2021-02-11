#ifndef HAAPIAUTHERRORMESSAGE
#define HAAPIAUTHERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HaapiAuthErrorMessage : public NetworkInterface {
public:
    unsigned int type = 0;
    unsigned int protocolId = 1483;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiAuthErrorMessage(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif