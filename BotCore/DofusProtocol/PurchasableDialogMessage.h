#ifndef PURCHASABLEDIALOGMESSAGE
#define PURCHASABLEDIALOGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PurchasableDialogMessage : public NetworkInterface {
public:
    bool buyOrSell = false;
    double purchasableId = 0;
    unsigned int purchasableInstanceId = 0;
    bool secondHand = false;
    double price = 0;
    unsigned int protocolId = 2191;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PurchasableDialogMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _purchasableIdFunc(ICustomDataInput &input);

    void _purchasableInstanceIdFunc(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);
};

#endif