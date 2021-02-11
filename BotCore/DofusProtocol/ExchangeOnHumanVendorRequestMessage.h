#ifndef EXCHANGEONHUMANVENDORREQUESTMESSAGE
#define EXCHANGEONHUMANVENDORREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeOnHumanVendorRequestMessage : public NetworkInterface {
public:
    double humanVendorId = 0;
    unsigned int humanVendorCell = 0;
    unsigned int protocolId = 5866;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeOnHumanVendorRequestMessage(ICustomDataInput &input);

    void _humanVendorIdFunc(ICustomDataInput &input);

    void _humanVendorCellFunc(ICustomDataInput &input);
};

#endif