#ifndef ACCOUNTINFORMATIONSUPDATEMESSAGE
#define ACCOUNTINFORMATIONSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AccountInformationsUpdateMessage : public NetworkInterface {
public:
    double subscriptionEndDate = 0;
    unsigned int protocolId = 8834;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AccountInformationsUpdateMessage(ICustomDataInput &input);

    void _subscriptionEndDateFunc(ICustomDataInput &input);
};

#endif