#ifndef MOUNTINFORMATIONREQUESTMESSAGE
#define MOUNTINFORMATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountInformationRequestMessage : public NetworkInterface {
public:
    double id = 0;
    double time = 0;
    unsigned int protocolId = 5271;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountInformationRequestMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _timeFunc(ICustomDataInput &input);
};

#endif