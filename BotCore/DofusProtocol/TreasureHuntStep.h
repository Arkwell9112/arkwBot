#ifndef TREASUREHUNTSTEP
#define TREASUREHUNTSTEP

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TreasureHuntStep : public NetworkInterface {
public:
    unsigned int protocolId = 2376;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntStep(ICustomDataInput &input);
};

#endif