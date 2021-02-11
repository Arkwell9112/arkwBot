#ifndef ABSTRACTCHARACTERINFORMATION
#define ABSTRACTCHARACTERINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AbstractCharacterInformation : public NetworkInterface {
public:
    double id = 0;
    unsigned int protocolId = 4631;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractCharacterInformation(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif