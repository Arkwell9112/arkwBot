#ifndef MOUNTINFORMATIONINPADDOCKREQUESTMESSAGE
#define MOUNTINFORMATIONINPADDOCKREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountInformationInPaddockRequestMessage : public NetworkInterface {
public:
    int mapRideId = 0;
    unsigned int protocolId = 8201;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountInformationInPaddockRequestMessage(ICustomDataInput &input);

    void _mapRideIdFunc(ICustomDataInput &input);
};

#endif