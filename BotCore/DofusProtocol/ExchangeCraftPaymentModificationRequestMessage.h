#ifndef EXCHANGECRAFTPAYMENTMODIFICATIONREQUESTMESSAGE
#define EXCHANGECRAFTPAYMENTMODIFICATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeCraftPaymentModificationRequestMessage : public NetworkInterface {
public:
    double quantity = 0;
    unsigned int protocolId = 717;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeCraftPaymentModificationRequestMessage(ICustomDataInput &input);

    void _quantityFunc(ICustomDataInput &input);
};

#endif