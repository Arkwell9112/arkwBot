#ifndef ALLIANCEMODIFICATIONSTARTEDMESSAGE
#define ALLIANCEMODIFICATIONSTARTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceModificationStartedMessage : public NetworkInterface {
public:
    bool canChangeName = false;
    bool canChangeTag = false;
    bool canChangeEmblem = false;
    unsigned int protocolId = 8378;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceModificationStartedMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);
};

#endif