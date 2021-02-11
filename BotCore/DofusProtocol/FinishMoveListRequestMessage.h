#ifndef FINISHMOVELISTREQUESTMESSAGE
#define FINISHMOVELISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FinishMoveListRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1295;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FinishMoveListRequestMessage(ICustomDataInput &input);
};

#endif