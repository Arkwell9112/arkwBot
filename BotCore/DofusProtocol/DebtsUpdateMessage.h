#ifndef DEBTSUPDATEMESSAGE
#define DEBTSUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "DebtInformation.h"

class DebtsUpdateMessage : public NetworkInterface {
public:
    unsigned int action = 0;
    std::vector<DebtInformation> debts;
    unsigned int protocolId = 4431;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DebtsUpdateMessage(ICustomDataInput &input);

    void _actionFunc(ICustomDataInput &input);

    void _debtsFunc(ICustomDataInput &input);
};

#endif