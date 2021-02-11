#ifndef EXCHANGESTARTOKMOUNTMESSAGE
#define EXCHANGESTARTOKMOUNTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ExchangeStartOkMountWithOutPaddockMessage.h"
#include "MountClientData.h"

class ExchangeStartOkMountMessage : public ExchangeStartOkMountWithOutPaddockMessage {
public:
    std::vector<MountClientData> paddockedMountsDescription;
    unsigned int protocolId = 6769;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkMountMessage(ICustomDataInput &input);

    void _paddockedMountsDescriptionFunc(ICustomDataInput &input);
};

#endif