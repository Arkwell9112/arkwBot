#ifndef CHANGEHAVENBAGROOMREQUESTMESSAGE
#define CHANGEHAVENBAGROOMREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChangeHavenBagRoomRequestMessage : public NetworkInterface {
public:
    unsigned int roomId = 0;
    unsigned int protocolId = 5103;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChangeHavenBagRoomRequestMessage(ICustomDataInput &input);

    void _roomIdFunc(ICustomDataInput &input);
};

#endif