#ifndef HOUSETOSELLLISTMESSAGE
#define HOUSETOSELLLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "HouseInformationsForSell.h"
#include "HouseInformations.h"

class HouseToSellListMessage : public NetworkInterface {
public:
    unsigned int pageIndex = 0;
    unsigned int totalPage = 0;
    std::vector<HouseInformationsForSell> houseList;
    unsigned int protocolId = 6788;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseToSellListMessage(ICustomDataInput &input);

    void _pageIndexFunc(ICustomDataInput &input);

    void _totalPageFunc(ICustomDataInput &input);

    void _houseListFunc(ICustomDataInput &input);
};

#endif