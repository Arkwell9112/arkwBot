#ifndef DECRAFTEDITEMSTACKINFO
#define DECRAFTEDITEMSTACKINFO

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Item.h"

class DecraftedItemStackInfo : public NetworkInterface {
public:
    unsigned int objectUID = 0;
    double bonusMin = 0;
    double bonusMax = 0;
    std::vector<unsigned int> runesId;
    std::vector<unsigned int> runesQty;
    unsigned int protocolId = 7627;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DecraftedItemStackInfo(ICustomDataInput &input);

    void _objectUIDFunc(ICustomDataInput &input);

    void _bonusMinFunc(ICustomDataInput &input);

    void _bonusMaxFunc(ICustomDataInput &input);

    void _runesIdFunc(ICustomDataInput &input);

    void _runesQtyFunc(ICustomDataInput &input);
};

#endif