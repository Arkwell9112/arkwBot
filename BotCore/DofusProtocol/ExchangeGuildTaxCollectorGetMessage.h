#ifndef EXCHANGEGUILDTAXCOLLECTORGETMESSAGE
#define EXCHANGEGUILDTAXCOLLECTORGETMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>
#include "ObjectItemGenericQuantity.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeGuildTaxCollectorGetMessage : public NetworkInterface {
public:
    std::string collectorName;
    int worldX = 0;
    int worldY = 0;
    double mapId = 0;
    unsigned int subAreaId = 0;
    std::string userName;
    double callerId = 0;
    std::string callerName;
    double experience = 0;
    unsigned int pods = 0;
    std::vector<ObjectItemGenericQuantity> objectsInfos;
    unsigned int protocolId = 6899;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeGuildTaxCollectorGetMessage(ICustomDataInput &input);

    void _collectorNameFunc(ICustomDataInput &input);

    void _worldXFunc(ICustomDataInput &input);

    void _worldYFunc(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _userNameFunc(ICustomDataInput &input);

    void _callerIdFunc(ICustomDataInput &input);

    void _callerNameFunc(ICustomDataInput &input);

    void _experienceFunc(ICustomDataInput &input);

    void _podsFunc(ICustomDataInput &input);

    void _objectsInfosFunc(ICustomDataInput &input);
};

#endif