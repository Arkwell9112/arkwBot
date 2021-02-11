#ifndef RECYCLERESULTMESSAGE
#define RECYCLERESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class RecycleResultMessage : public NetworkInterface {
public:
    unsigned int nuggetsForPrism = 0;
    unsigned int nuggetsForPlayer = 0;
    unsigned int protocolId = 3012;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_RecycleResultMessage(ICustomDataInput &input);

    void _nuggetsForPrismFunc(ICustomDataInput &input);

    void _nuggetsForPlayerFunc(ICustomDataInput &input);
};

#endif