#ifndef ACCOUNTHOUSEMESSAGE
#define ACCOUNTHOUSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "HouseInformations.h"
#include "AccountHouseInformations.h"

class AccountHouseMessage : public NetworkInterface {
public:
    std::vector<AccountHouseInformations> houses;
    unsigned int protocolId = 6805;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AccountHouseMessage(ICustomDataInput &input);

    void _housesFunc(ICustomDataInput &input);
};

#endif