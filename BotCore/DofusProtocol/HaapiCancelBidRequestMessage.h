#ifndef HAAPICANCELBIDREQUESTMESSAGE
#define HAAPICANCELBIDREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HaapiCancelBidRequestMessage : public NetworkInterface {
public:
    double id = 0;
    unsigned int type = 0;
    unsigned int protocolId = 3445;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiCancelBidRequestMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif