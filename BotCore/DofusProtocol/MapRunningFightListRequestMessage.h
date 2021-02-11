#ifndef MAPRUNNINGFIGHTLISTREQUESTMESSAGE
#define MAPRUNNINGFIGHTLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MapRunningFightListRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7932;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapRunningFightListRequestMessage(ICustomDataInput &input);
};

#endif