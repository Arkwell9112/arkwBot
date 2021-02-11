#ifndef TAXCOLLECTORMOVEMENTSOFFLINEMESSAGE
#define TAXCOLLECTORMOVEMENTSOFFLINEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "TaxCollectorMovement.h"

class TaxCollectorMovementsOfflineMessage : public NetworkInterface {
public:
    std::vector<TaxCollectorMovement> movements;
    unsigned int protocolId = 7239;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorMovementsOfflineMessage(ICustomDataInput &input);

    void _movementsFunc(ICustomDataInput &input);
};

#endif