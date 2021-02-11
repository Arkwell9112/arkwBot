#ifndef HELLOGAMEMESSAGE
#define HELLOGAMEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HelloGameMessage : public NetworkInterface {
public:
    unsigned int protocolId = 8303;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HelloGameMessage(ICustomDataInput &input);
};

#endif