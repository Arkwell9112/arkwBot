#ifndef MAPRUNNINGFIGHTDETAILSREQUESTMESSAGE
#define MAPRUNNINGFIGHTDETAILSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MapRunningFightDetailsRequestMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    unsigned int protocolId = 5115;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapRunningFightDetailsRequestMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);
};

#endif