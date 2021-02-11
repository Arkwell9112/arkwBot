#ifndef ALLIANCELISTMESSAGE
#define ALLIANCELISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "AllianceFactSheetInformations.h"

class AllianceListMessage : public NetworkInterface {
public:
    std::vector<AllianceFactSheetInformations> alliances;
    unsigned int protocolId = 4237;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceListMessage(ICustomDataInput &input);

    void _alliancesFunc(ICustomDataInput &input);
};

#endif