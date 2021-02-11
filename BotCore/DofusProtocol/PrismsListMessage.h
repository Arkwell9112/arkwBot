#ifndef PRISMSLISTMESSAGE
#define PRISMSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "PrismSubareaEmptyInfo.h"

class PrismsListMessage : public NetworkInterface {
public:
    std::vector<PrismSubareaEmptyInfo> prisms;
    unsigned int protocolId = 4670;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismsListMessage(ICustomDataInput &input);

    void _prismsFunc(ICustomDataInput &input);
};

#endif