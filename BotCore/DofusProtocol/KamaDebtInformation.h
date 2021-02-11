#ifndef KAMADEBTINFORMATION
#define KAMADEBTINFORMATION

#include "../IO/ICustomDataInput.h"
#include "DebtInformation.h"

class KamaDebtInformation : public DebtInformation {
public:
    double kamas = 0;
    unsigned int protocolId = 6089;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_KamaDebtInformation(ICustomDataInput &input);

    void _kamasFunc(ICustomDataInput &input);
};

#endif