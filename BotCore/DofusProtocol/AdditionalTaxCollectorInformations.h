#ifndef ADDITIONALTAXCOLLECTORINFORMATIONS
#define ADDITIONALTAXCOLLECTORINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class AdditionalTaxCollectorInformations : public NetworkInterface {
public:
    std::string collectorCallerName;
    unsigned int date = 0;
    unsigned int protocolId = 6420;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AdditionalTaxCollectorInformations(ICustomDataInput &input);

    void _collectorCallerNameFunc(ICustomDataInput &input);

    void _dateFunc(ICustomDataInput &input);
};

#endif