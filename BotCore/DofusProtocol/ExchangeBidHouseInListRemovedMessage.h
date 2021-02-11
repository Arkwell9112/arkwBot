#ifndef EXCHANGEBIDHOUSEINLISTREMOVEDMESSAGE
#define EXCHANGEBIDHOUSEINLISTREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBidHouseInListRemovedMessage : public NetworkInterface {
public:
    int itemUID = 0;
    unsigned int objectGID = 0;
    unsigned int objectType = 0;
    unsigned int protocolId = 9446;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHouseInListRemovedMessage(ICustomDataInput &input);

    void _itemUIDFunc(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);

    void _objectTypeFunc(ICustomDataInput &input);
};

#endif