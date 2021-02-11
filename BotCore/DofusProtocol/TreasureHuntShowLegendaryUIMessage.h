#ifndef TREASUREHUNTSHOWLEGENDARYUIMESSAGE
#define TREASUREHUNTSHOWLEGENDARYUIMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class TreasureHuntShowLegendaryUIMessage : public NetworkInterface {
public:
    std::vector<unsigned int> availableLegendaryIds;
    unsigned int protocolId = 7328;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TreasureHuntShowLegendaryUIMessage(ICustomDataInput &input);

    void _availableLegendaryIdsFunc(ICustomDataInput &input);
};

#endif