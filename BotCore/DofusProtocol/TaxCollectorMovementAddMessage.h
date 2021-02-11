#ifndef TAXCOLLECTORMOVEMENTADDMESSAGE
#define TAXCOLLECTORMOVEMENTADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "TaxCollectorMovement.h"
#include "TaxCollectorInformations.h"

class TaxCollectorMovementAddMessage : public NetworkInterface {
public:
    TaxCollectorInformations informations;
    unsigned int protocolId = 6813;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorMovementAddMessage(ICustomDataInput &input);
};

#endif