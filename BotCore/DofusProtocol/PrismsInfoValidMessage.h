#ifndef PRISMSINFOVALIDMESSAGE
#define PRISMSINFOVALIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "PrismFightersInformation.h"

class PrismsInfoValidMessage : public NetworkInterface {
public:
    std::vector<PrismFightersInformation> fights;
    unsigned int protocolId = 583;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismsInfoValidMessage(ICustomDataInput &input);

    void _fightsFunc(ICustomDataInput &input);
};

#endif