#ifndef TAXCOLLECTORMOVEMENTREMOVEMESSAGE
#define TAXCOLLECTORMOVEMENTREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "TaxCollectorMovement.h"

class TaxCollectorMovementRemoveMessage : public NetworkInterface {
public:
    double collectorId = 0;
    unsigned int protocolId = 3879;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorMovementRemoveMessage(ICustomDataInput &input);

    void _collectorIdFunc(ICustomDataInput &input);
};

#endif