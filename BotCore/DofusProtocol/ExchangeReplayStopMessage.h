#ifndef EXCHANGEREPLAYSTOPMESSAGE
#define EXCHANGEREPLAYSTOPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeReplayStopMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2946;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeReplayStopMessage(ICustomDataInput &input);
};

#endif