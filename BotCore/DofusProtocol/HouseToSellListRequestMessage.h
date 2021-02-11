#ifndef HOUSETOSELLLISTREQUESTMESSAGE
#define HOUSETOSELLLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HouseToSellListRequestMessage : public NetworkInterface {
public:
    unsigned int pageIndex = 0;
    unsigned int protocolId = 6087;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseToSellListRequestMessage(ICustomDataInput &input);

    void _pageIndexFunc(ICustomDataInput &input);
};

#endif