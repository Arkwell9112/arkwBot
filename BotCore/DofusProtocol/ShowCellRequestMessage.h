#ifndef SHOWCELLREQUESTMESSAGE
#define SHOWCELLREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ShowCellRequestMessage : public NetworkInterface {
public:
    unsigned int cellId = 0;
    unsigned int protocolId = 7669;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShowCellRequestMessage(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif