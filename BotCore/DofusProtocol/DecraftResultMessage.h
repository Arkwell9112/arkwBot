#ifndef DECRAFTRESULTMESSAGE
#define DECRAFTRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "DecraftedItemStackInfo.h"
#include "Item.h"

class DecraftResultMessage : public NetworkInterface {
public:
    std::vector<DecraftedItemStackInfo> results;
    unsigned int protocolId = 2646;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DecraftResultMessage(ICustomDataInput &input);

    void _resultsFunc(ICustomDataInput &input);
};

#endif