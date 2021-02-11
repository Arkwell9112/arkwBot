#ifndef SYMBIOTICOBJECTASSOCIATEDMESSAGE
#define SYMBIOTICOBJECTASSOCIATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SymbioticObjectAssociatedMessage : public NetworkInterface {
public:
    unsigned int hostUID = 0;
    unsigned int protocolId = 984;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SymbioticObjectAssociatedMessage(ICustomDataInput &input);

    void _hostUIDFunc(ICustomDataInput &input);
};

#endif