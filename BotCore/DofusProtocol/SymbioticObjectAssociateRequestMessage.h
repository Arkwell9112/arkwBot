#ifndef SYMBIOTICOBJECTASSOCIATEREQUESTMESSAGE
#define SYMBIOTICOBJECTASSOCIATEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SymbioticObjectAssociateRequestMessage : public NetworkInterface {
public:
    unsigned int symbioteUID = 0;
    unsigned int symbiotePos = 0;
    unsigned int hostUID = 0;
    unsigned int hostPos = 0;
    unsigned int protocolId = 8160;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SymbioticObjectAssociateRequestMessage(ICustomDataInput &input);

    void _symbioteUIDFunc(ICustomDataInput &input);

    void _symbiotePosFunc(ICustomDataInput &input);

    void _hostUIDFunc(ICustomDataInput &input);

    void _hostPosFunc(ICustomDataInput &input);
};

#endif