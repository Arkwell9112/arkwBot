#ifndef PADDOCKSELLBUYDIALOGMESSAGE
#define PADDOCKSELLBUYDIALOGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PaddockSellBuyDialogMessage : public NetworkInterface {
public:
    bool bsell = false;
    unsigned int ownerId = 0;
    double price = 0;
    unsigned int protocolId = 9687;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockSellBuyDialogMessage(ICustomDataInput &input);

    void _bsellFunc(ICustomDataInput &input);

    void _ownerIdFunc(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);
};

#endif