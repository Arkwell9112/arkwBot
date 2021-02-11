#ifndef HAAPICONFIRMATIONMESSAGE
#define HAAPICONFIRMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class HaapiConfirmationMessage : public NetworkInterface {
public:
    double kamas = 0;
    double amount = 0;
    unsigned int rate = 0;
    unsigned int action = 0;
    std::string transaction;
    unsigned int protocolId = 9958;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiConfirmationMessage(ICustomDataInput &input);

    void _kamasFunc(ICustomDataInput &input);

    void _amountFunc(ICustomDataInput &input);

    void _rateFunc(ICustomDataInput &input);

    void _actionFunc(ICustomDataInput &input);

    void _transactionFunc(ICustomDataInput &input);
};

#endif