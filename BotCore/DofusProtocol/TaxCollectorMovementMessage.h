#ifndef TAXCOLLECTORMOVEMENTMESSAGE
#define TAXCOLLECTORMOVEMENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "TaxCollectorMovement.h"
#include "TaxCollectorBasicInformations.h"

class TaxCollectorMovementMessage : public NetworkInterface {
public:
    unsigned int movementType = 0;
    TaxCollectorBasicInformations basicInfos;
    double playerId = 0;
    std::string playerName;
    unsigned int protocolId = 722;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorMovementMessage(ICustomDataInput &input);

    void _movementTypeFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);
};

#endif