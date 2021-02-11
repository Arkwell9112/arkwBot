#ifndef SHOWCELLMESSAGE
#define SHOWCELLMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ShowCellMessage : public NetworkInterface {
public:
    double sourceId = 0;
    unsigned int cellId = 0;
    unsigned int protocolId = 1611;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShowCellMessage(ICustomDataInput &input);

    void _sourceIdFunc(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif