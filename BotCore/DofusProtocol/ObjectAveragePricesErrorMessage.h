#ifndef OBJECTAVERAGEPRICESERRORMESSAGE
#define OBJECTAVERAGEPRICESERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectAveragePricesErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2048;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectAveragePricesErrorMessage(ICustomDataInput &input);
};

#endif