#ifndef EXCHANGEMOUNTSTABLEERRORMESSAGE
#define EXCHANGEMOUNTSTABLEERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeMountStableErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2798;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMountStableErrorMessage(ICustomDataInput &input);
};

#endif