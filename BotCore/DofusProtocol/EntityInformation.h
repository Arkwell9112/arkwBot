#ifndef ENTITYINFORMATION
#define ENTITYINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EntityInformation : public NetworkInterface {
public:
    unsigned int id = 0;
    unsigned int experience = 0;
    bool status = false;
    unsigned int protocolId = 1072;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EntityInformation(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _experienceFunc(ICustomDataInput &input);

    void _statusFunc(ICustomDataInput &input);
};

#endif