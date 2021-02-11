#ifndef OBJECTAVERAGEPRICESMESSAGE
#define OBJECTAVERAGEPRICESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ObjectAveragePricesMessage : public NetworkInterface {
public:
    std::vector<unsigned int> ids;
    std::vector<double> avgPrices;
    unsigned int protocolId = 1697;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectAveragePricesMessage(ICustomDataInput &input);

    void _idsFunc(ICustomDataInput &input);

    void _avgPricesFunc(ICustomDataInput &input);
};

#endif