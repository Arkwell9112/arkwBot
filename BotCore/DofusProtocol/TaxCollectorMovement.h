#ifndef TAXCOLLECTORMOVEMENT
#define TAXCOLLECTORMOVEMENT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "TaxCollectorBasicInformations.h"

class TaxCollectorMovement : public NetworkInterface {
public:
    unsigned int movementType = 0;
    TaxCollectorBasicInformations basicInfos;
    double playerId = 0;
    std::string playerName;
    unsigned int protocolId = 1360;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorMovement(ICustomDataInput &input);

    void _movementTypeFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);
};

#endif