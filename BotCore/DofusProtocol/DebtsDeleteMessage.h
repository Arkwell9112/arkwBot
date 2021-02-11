#ifndef DEBTSDELETEMESSAGE
#define DEBTSDELETEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class DebtsDeleteMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    std::vector<double> debts;
    unsigned int protocolId = 8963;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DebtsDeleteMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);

    void _debtsFunc(ICustomDataInput &input);
};

#endif