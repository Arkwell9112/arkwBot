#ifndef SEQUENCEENDMESSAGE
#define SEQUENCEENDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SequenceEndMessage : public NetworkInterface {
public:
    unsigned int actionId = 0;
    double authorId = 0;
    int sequenceType = 0;
    unsigned int protocolId = 2740;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SequenceEndMessage(ICustomDataInput &input);

    void _actionIdFunc(ICustomDataInput &input);

    void _authorIdFunc(ICustomDataInput &input);

    void _sequenceTypeFunc(ICustomDataInput &input);
};

#endif