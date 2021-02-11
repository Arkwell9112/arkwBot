#ifndef EXCHANGEMOUNTSSTABLEADDMESSAGE
#define EXCHANGEMOUNTSSTABLEADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MountClientData.h"

class ExchangeMountsStableAddMessage : public NetworkInterface {
public:
    std::vector<MountClientData> mountDescription;
    unsigned int protocolId = 3385;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMountsStableAddMessage(ICustomDataInput &input);

    void _mountDescriptionFunc(ICustomDataInput &input);
};

#endif