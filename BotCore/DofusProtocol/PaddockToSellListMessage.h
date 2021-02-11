#ifndef PADDOCKTOSELLLISTMESSAGE
#define PADDOCKTOSELLLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "PaddockInformationsForSell.h"
#include "PaddockInformations.h"

class PaddockToSellListMessage : public NetworkInterface {
public:
    unsigned int pageIndex = 0;
    unsigned int totalPage = 0;
    std::vector<PaddockInformationsForSell> paddockList;
    unsigned int protocolId = 3275;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockToSellListMessage(ICustomDataInput &input);

    void _pageIndexFunc(ICustomDataInput &input);

    void _totalPageFunc(ICustomDataInput &input);

    void _paddockListFunc(ICustomDataInput &input);
};

#endif