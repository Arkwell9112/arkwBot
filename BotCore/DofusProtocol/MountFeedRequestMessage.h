#ifndef MOUNTFEEDREQUESTMESSAGE
#define MOUNTFEEDREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountFeedRequestMessage : public NetworkInterface {
public:
    unsigned int mountUid = 0;
    int mountLocation = 0;
    unsigned int mountFoodUid = 0;
    unsigned int quantity = 0;
    unsigned int protocolId = 5427;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountFeedRequestMessage(ICustomDataInput &input);

    void _mountUidFunc(ICustomDataInput &input);

    void _mountLocationFunc(ICustomDataInput &input);

    void _mountFoodUidFunc(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif