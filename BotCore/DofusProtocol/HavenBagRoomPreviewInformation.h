#ifndef HAVENBAGROOMPREVIEWINFORMATION
#define HAVENBAGROOMPREVIEWINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HavenBagRoomPreviewInformation : public NetworkInterface {
public:
    unsigned int roomId = 0;
    int themeId = 0;
    unsigned int protocolId = 6076;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HavenBagRoomPreviewInformation(ICustomDataInput &input);

    void _roomIdFunc(ICustomDataInput &input);

    void _themeIdFunc(ICustomDataInput &input);
};

#endif