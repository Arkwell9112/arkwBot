#ifndef EXCHANGESTARTOKMOUNTWITHOUTPADDOCKMESSAGE
#define EXCHANGESTARTOKMOUNTWITHOUTPADDOCKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MountClientData.h"

class ExchangeStartOkMountWithOutPaddockMessage : public NetworkInterface {
public:
    std::vector<MountClientData> stabledMountsDescription;
    unsigned int protocolId = 2616;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkMountWithOutPaddockMessage(ICustomDataInput &input);

    void _stabledMountsDescriptionFunc(ICustomDataInput &input);
};

#endif