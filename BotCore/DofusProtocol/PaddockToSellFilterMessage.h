#ifndef PADDOCKTOSELLFILTERMESSAGE
#define PADDOCKTOSELLFILTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PaddockToSellFilterMessage : public NetworkInterface {
public:
    int areaId = 0;
    int atLeastNbMount = 0;
    int atLeastNbMachine = 0;
    double maxPrice = 0;
    unsigned int orderBy = 0;
    unsigned int protocolId = 5860;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockToSellFilterMessage(ICustomDataInput &input);

    void _areaIdFunc(ICustomDataInput &input);

    void _atLeastNbMountFunc(ICustomDataInput &input);

    void _atLeastNbMachineFunc(ICustomDataInput &input);

    void _maxPriceFunc(ICustomDataInput &input);

    void _orderByFunc(ICustomDataInput &input);
};

#endif