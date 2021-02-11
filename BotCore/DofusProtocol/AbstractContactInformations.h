#ifndef ABSTRACTCONTACTINFORMATIONS
#define ABSTRACTCONTACTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class AbstractContactInformations : public NetworkInterface {
public:
    unsigned int accountId = 0;
    std::string accountName;
    unsigned int protocolId = 3761;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractContactInformations(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);

    void _accountNameFunc(ICustomDataInput &input);
};

#endif