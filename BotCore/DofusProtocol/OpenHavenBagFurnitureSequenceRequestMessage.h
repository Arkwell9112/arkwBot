#ifndef OPENHAVENBAGFURNITURESEQUENCEREQUESTMESSAGE
#define OPENHAVENBAGFURNITURESEQUENCEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class OpenHavenBagFurnitureSequenceRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1528;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_OpenHavenBagFurnitureSequenceRequestMessage(ICustomDataInput &input);
};

#endif