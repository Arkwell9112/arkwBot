#ifndef MOUNTDATAERRORMESSAGE
#define MOUNTDATAERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountDataErrorMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 2148;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountDataErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif