#ifndef ENTITYDISPOSITIONINFORMATIONS
#define ENTITYDISPOSITIONINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EntityDispositionInformations : public NetworkInterface {
public:
    int cellId = 0;
    unsigned int direction = 1;
    unsigned int protocolId = 3023;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EntityDispositionInformations(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);

    void _directionFunc(ICustomDataInput &input);
};

#endif