#ifndef ACQUAINTANCESLISTMESSAGE
#define ACQUAINTANCESLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "AcquaintanceInformation.h"

class AcquaintancesListMessage : public NetworkInterface {
public:
    std::vector<AcquaintanceInformation> acquaintanceList;
    unsigned int protocolId = 6650;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AcquaintancesListMessage(ICustomDataInput &input);

    void _acquaintanceListFunc(ICustomDataInput &input);
};

#endif