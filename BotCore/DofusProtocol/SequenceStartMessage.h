#ifndef SEQUENCESTARTMESSAGE
#define SEQUENCESTARTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SequenceStartMessage : public NetworkInterface {
public:
    int sequenceType = 0;
    double authorId = 0;
    unsigned int protocolId = 326;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SequenceStartMessage(ICustomDataInput &input);

    void _sequenceTypeFunc(ICustomDataInput &input);

    void _authorIdFunc(ICustomDataInput &input);
};

#endif