#ifndef DEBTINFORMATION
#define DEBTINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class DebtInformation : public NetworkInterface {
public:
    double id = 0;
    double timestamp = 0;
    unsigned int protocolId = 7486;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DebtInformation(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _timestampFunc(ICustomDataInput &input);
};

#endif