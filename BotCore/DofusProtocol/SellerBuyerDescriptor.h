#ifndef SELLERBUYERDESCRIPTOR
#define SELLERBUYERDESCRIPTOR

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Item.h"

class SellerBuyerDescriptor : public NetworkInterface {
public:
    std::vector<unsigned int> quantities;
    std::vector<unsigned int> types;
    double taxPercentage = 0;
    double taxModificationPercentage = 0;
    unsigned int maxItemLevel = 0;
    unsigned int maxItemPerAccount = 0;
    int npcContextualId = 0;
    unsigned int unsoldDelay = 0;
    unsigned int protocolId = 4327;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SellerBuyerDescriptor(ICustomDataInput &input);

    void _quantitiesFunc(ICustomDataInput &input);

    void _typesFunc(ICustomDataInput &input);

    void _taxPercentageFunc(ICustomDataInput &input);

    void _taxModificationPercentageFunc(ICustomDataInput &input);

    void _maxItemLevelFunc(ICustomDataInput &input);

    void _maxItemPerAccountFunc(ICustomDataInput &input);

    void _npcContextualIdFunc(ICustomDataInput &input);

    void _unsoldDelayFunc(ICustomDataInput &input);
};

#endif