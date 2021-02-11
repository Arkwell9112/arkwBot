#ifndef HAVENBAGROOMUPDATEMESSAGE
#define HAVENBAGROOMUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "HavenBagRoomPreviewInformation.h"

class HavenBagRoomUpdateMessage : public NetworkInterface {
public:
    unsigned int action = 0;
    std::vector<HavenBagRoomPreviewInformation> roomsPreview;
    unsigned int protocolId = 5257;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HavenBagRoomUpdateMessage(ICustomDataInput &input);

    void _actionFunc(ICustomDataInput &input);

    void _roomsPreviewFunc(ICustomDataInput &input);
};

#endif