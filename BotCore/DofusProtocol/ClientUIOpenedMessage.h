#ifndef CLIENTUIOPENEDMESSAGE
#define CLIENTUIOPENEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ClientUIOpenedMessage : public NetworkInterface {
public:
    unsigned int type = 0;
    unsigned int protocolId = 2378;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ClientUIOpenedMessage(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif