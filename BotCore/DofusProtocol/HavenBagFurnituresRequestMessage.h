#ifndef HAVENBAGFURNITURESREQUESTMESSAGE
#define HAVENBAGFURNITURESREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class HavenBagFurnituresRequestMessage : public NetworkInterface {
public:
    std::vector<unsigned int> cellIds;
    std::vector<int> funitureIds;
    std::vector<unsigned int> orientations;
    unsigned int protocolId = 2419;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HavenBagFurnituresRequestMessage(ICustomDataInput &input);

    void _cellIdsFunc(ICustomDataInput &input);

    void _funitureIdsFunc(ICustomDataInput &input);

    void _orientationsFunc(ICustomDataInput &input);
};

#endif