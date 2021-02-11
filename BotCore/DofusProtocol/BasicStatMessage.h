#ifndef BASICSTATMESSAGE
#define BASICSTATMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicStatMessage : public NetworkInterface {
public:
    double timeSpent = 0;
    unsigned int statId = 0;
    unsigned int protocolId = 9059;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicStatMessage(ICustomDataInput &input);

    void _timeSpentFunc(ICustomDataInput &input);

    void _statIdFunc(ICustomDataInput &input);
};

#endif