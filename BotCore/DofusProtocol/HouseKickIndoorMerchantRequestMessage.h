#ifndef HOUSEKICKINDOORMERCHANTREQUESTMESSAGE
#define HOUSEKICKINDOORMERCHANTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseKickIndoorMerchantRequestMessage : public NetworkInterface {
public:
    unsigned int cellId = 0;
    unsigned int protocolId = 9500;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseKickIndoorMerchantRequestMessage(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif