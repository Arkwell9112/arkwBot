#ifndef EXCHANGESTARTEDTAXCOLLECTORSHOPMESSAGE
#define EXCHANGESTARTEDTAXCOLLECTORSHOPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"

class ExchangeStartedTaxCollectorShopMessage : public NetworkInterface {
public:
    std::vector<ObjectItem> objects;
    double kamas = 0;
    unsigned int protocolId = 4481;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartedTaxCollectorShopMessage(ICustomDataInput &input);

    void _objectsFunc(ICustomDataInput &input);

    void _kamasFunc(ICustomDataInput &input);
};

#endif