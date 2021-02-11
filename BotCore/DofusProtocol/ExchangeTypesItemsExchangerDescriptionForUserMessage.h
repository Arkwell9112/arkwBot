#ifndef EXCHANGETYPESITEMSEXCHANGERDESCRIPTIONFORUSERMESSAGE
#define EXCHANGETYPESITEMSEXCHANGERDESCRIPTIONFORUSERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Item.h"
#include "BidExchangerObjectInfo.h"

class ExchangeTypesItemsExchangerDescriptionForUserMessage : public NetworkInterface {
public:
    unsigned int objectType = 0;
    std::vector<BidExchangerObjectInfo> itemTypeDescriptions;
    unsigned int protocolId = 3518;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeTypesItemsExchangerDescriptionForUserMessage(ICustomDataInput &input);

    void _objectTypeFunc(ICustomDataInput &input);

    void _itemTypeDescriptionsFunc(ICustomDataInput &input);
};

#endif