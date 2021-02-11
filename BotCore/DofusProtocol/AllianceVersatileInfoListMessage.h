#ifndef ALLIANCEVERSATILEINFOLISTMESSAGE
#define ALLIANCEVERSATILEINFOLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "AllianceVersatileInformations.h"

class AllianceVersatileInfoListMessage : public NetworkInterface {
public:
    std::vector<AllianceVersatileInformations> alliances;
    unsigned int protocolId = 1735;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceVersatileInfoListMessage(ICustomDataInput &input);

    void _alliancesFunc(ICustomDataInput &input);
};

#endif