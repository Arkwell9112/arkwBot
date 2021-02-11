#ifndef ALREADYCONNECTEDMESSAGE
#define ALREADYCONNECTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AlreadyConnectedMessage : public NetworkInterface {
public:
    unsigned int protocolId = 8636;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlreadyConnectedMessage(ICustomDataInput &input);
};

#endif