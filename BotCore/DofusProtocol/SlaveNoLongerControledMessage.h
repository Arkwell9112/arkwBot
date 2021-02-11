#ifndef SLAVENOLONGERCONTROLEDMESSAGE
#define SLAVENOLONGERCONTROLEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SlaveNoLongerControledMessage : public NetworkInterface {
public:
    double masterId = 0;
    double slaveId = 0;
    unsigned int protocolId = 338;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SlaveNoLongerControledMessage(ICustomDataInput &input);

    void _masterIdFunc(ICustomDataInput &input);

    void _slaveIdFunc(ICustomDataInput &input);
};

#endif