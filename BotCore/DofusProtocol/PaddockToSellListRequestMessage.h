#ifndef PADDOCKTOSELLLISTREQUESTMESSAGE
#define PADDOCKTOSELLLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PaddockToSellListRequestMessage : public NetworkInterface {
public:
    unsigned int pageIndex = 0;
    unsigned int protocolId = 4643;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockToSellListRequestMessage(ICustomDataInput &input);

    void _pageIndexFunc(ICustomDataInput &input);
};

#endif