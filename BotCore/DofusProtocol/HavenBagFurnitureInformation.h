#ifndef HAVENBAGFURNITUREINFORMATION
#define HAVENBAGFURNITUREINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HavenBagFurnitureInformation : public NetworkInterface {
public:
    unsigned int cellId = 0;
    int funitureId = 0;
    unsigned int orientation = 0;
    unsigned int protocolId = 8992;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HavenBagFurnitureInformation(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);

    void _funitureIdFunc(ICustomDataInput &input);

    void _orientationFunc(ICustomDataInput &input);
};

#endif