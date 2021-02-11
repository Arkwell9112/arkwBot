#ifndef BREACHREWARD
#define BREACHREWARD

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class BreachReward : public NetworkInterface {
public:
    unsigned int id = 0;
    std::vector<unsigned int> buyLocks;
    std::string buyCriterion;
    int remainingQty = 0;
    unsigned int price = 0;
    unsigned int protocolId = 2906;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachReward(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _buyLocksFunc(ICustomDataInput &input);

    void _buyCriterionFunc(ICustomDataInput &input);

    void _remainingQtyFunc(ICustomDataInput &input);

    void _priceFunc(ICustomDataInput &input);
};

#endif