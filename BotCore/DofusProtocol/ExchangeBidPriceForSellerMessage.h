#ifndef EXCHANGEBIDPRICEFORSELLERMESSAGE
#define EXCHANGEBIDPRICEFORSELLERMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "ExchangeBidPriceMessage.h"

class ExchangeBidPriceForSellerMessage : public ExchangeBidPriceMessage {
public:
    bool allIdentical = false;
    std::vector<double> minimalPrices;
    unsigned int protocolId = 2041;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidPriceForSellerMessage(ICustomDataInput &input);

    void _allIdenticalFunc(ICustomDataInput &input);

    void _minimalPricesFunc(ICustomDataInput &input);
};

#endif