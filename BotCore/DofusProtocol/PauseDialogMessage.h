#ifndef PAUSEDIALOGMESSAGE
#define PAUSEDIALOGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PauseDialogMessage : public NetworkInterface {
public:
    unsigned int dialogType = 0;
    unsigned int protocolId = 415;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PauseDialogMessage(ICustomDataInput &input);

    void _dialogTypeFunc(ICustomDataInput &input);
};

#endif