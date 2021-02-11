#ifndef SEQUENCENUMBERMESSAGE
#define SEQUENCENUMBERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SequenceNumberMessage : public NetworkInterface {
public:
    unsigned int number = 0;
    unsigned int protocolId = 6768;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SequenceNumberMessage(ICustomDataInput &input);

    void _numberFunc(ICustomDataInput &input);
};

#endif