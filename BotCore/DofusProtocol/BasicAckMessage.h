#ifndef BASICACKMESSAGE
#define BASICACKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicAckMessage : public NetworkInterface {
public:
    unsigned int seq = 0;
    unsigned int lastPacketId = 0;
    unsigned int protocolId = 1792;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicAckMessage(ICustomDataInput &input);

    void _seqFunc(ICustomDataInput &input);

    void _lastPacketIdFunc(ICustomDataInput &input);
};

#endif