#ifndef EXCHANGEERRORMESSAGE
#define EXCHANGEERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeErrorMessage : public NetworkInterface {
public:
    int errorType = 0;
    unsigned int protocolId = 5333;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeErrorMessage(ICustomDataInput &input);

    void _errorTypeFunc(ICustomDataInput &input);
};

#endif