#ifndef INTERACTIVEUSEREQUESTMESSAGE
#define INTERACTIVEUSEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class InteractiveUseRequestMessage : public NetworkInterface {
public:
    unsigned int elemId = 0;
    unsigned int skillInstanceUid = 0;
    unsigned int protocolId = 3383;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveUseRequestMessage(ICustomDataInput &input);

    void _elemIdFunc(ICustomDataInput &input);

    void _skillInstanceUidFunc(ICustomDataInput &input);
};

#endif