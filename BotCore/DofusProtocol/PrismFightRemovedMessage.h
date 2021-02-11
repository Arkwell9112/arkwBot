#ifndef PRISMFIGHTREMOVEDMESSAGE
#define PRISMFIGHTREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismFightRemovedMessage : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    unsigned int protocolId = 5173;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismFightRemovedMessage(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);
};

#endif