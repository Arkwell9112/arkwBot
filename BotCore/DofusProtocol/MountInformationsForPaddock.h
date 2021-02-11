#ifndef MOUNTINFORMATIONSFORPADDOCK
#define MOUNTINFORMATIONSFORPADDOCK

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class MountInformationsForPaddock : public NetworkInterface {
public:
    unsigned int modelId = 0;
    std::string name;
    std::string ownerName;
    unsigned int protocolId = 8570;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountInformationsForPaddock(ICustomDataInput &input);

    void _modelIdFunc(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _ownerNameFunc(ICustomDataInput &input);
};

#endif