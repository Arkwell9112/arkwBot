#ifndef EXCHANGEMOUNTSSTABLEREMOVEMESSAGE
#define EXCHANGEMOUNTSSTABLEREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ExchangeMountsStableRemoveMessage : public NetworkInterface {
public:
    std::vector<int> mountsId;
    unsigned int protocolId = 1299;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMountsStableRemoveMessage(ICustomDataInput &input);

    void _mountsIdFunc(ICustomDataInput &input);
};

#endif