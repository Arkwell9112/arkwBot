#ifndef MIMICRYOBJECTERASEREQUESTMESSAGE
#define MIMICRYOBJECTERASEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MimicryObjectEraseRequestMessage : public NetworkInterface {
public:
    unsigned int hostUID = 0;
    unsigned int hostPos = 0;
    unsigned int protocolId = 7469;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MimicryObjectEraseRequestMessage(ICustomDataInput &input);

    void _hostUIDFunc(ICustomDataInput &input);

    void _hostPosFunc(ICustomDataInput &input);
};

#endif