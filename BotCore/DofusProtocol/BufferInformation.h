#ifndef BUFFERINFORMATION
#define BUFFERINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BufferInformation : public NetworkInterface {
public:
    double id = 0;
    double amount = 0;
    unsigned int protocolId = 407;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BufferInformation(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _amountFunc(ICustomDataInput &input);
};

#endif