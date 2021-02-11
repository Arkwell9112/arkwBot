#ifndef HAVENBAGFURNITURESMESSAGE
#define HAVENBAGFURNITURESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "HavenBagFurnitureInformation.h"

class HavenBagFurnituresMessage : public NetworkInterface {
public:
    std::vector<HavenBagFurnitureInformation> furnituresInfos;
    unsigned int protocolId = 6532;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HavenBagFurnituresMessage(ICustomDataInput &input);

    void _furnituresInfosFunc(ICustomDataInput &input);
};

#endif