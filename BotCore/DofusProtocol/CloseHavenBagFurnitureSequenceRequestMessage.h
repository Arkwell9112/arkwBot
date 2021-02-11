#ifndef CLOSEHAVENBAGFURNITURESEQUENCEREQUESTMESSAGE
#define CLOSEHAVENBAGFURNITURESEQUENCEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CloseHavenBagFurnitureSequenceRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7140;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CloseHavenBagFurnitureSequenceRequestMessage(ICustomDataInput &input);
};

#endif