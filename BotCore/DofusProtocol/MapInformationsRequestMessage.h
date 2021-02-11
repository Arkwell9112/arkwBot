#ifndef MAPINFORMATIONSREQUESTMESSAGE
#define MAPINFORMATIONSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MapInformationsRequestMessage : public NetworkInterface {
public:
    double mapId = 0;
    unsigned int protocolId = 7834;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapInformationsRequestMessage(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);
};

#endif