#ifndef WRAPPEROBJECTDISSOCIATEREQUESTMESSAGE
#define WRAPPEROBJECTDISSOCIATEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class WrapperObjectDissociateRequestMessage : public NetworkInterface {
public:
    unsigned int hostUID = 0;
    unsigned int hostPos = 0;
    unsigned int protocolId = 9321;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_WrapperObjectDissociateRequestMessage(ICustomDataInput &input);

    void _hostUIDFunc(ICustomDataInput &input);

    void _hostPosFunc(ICustomDataInput &input);
};

#endif