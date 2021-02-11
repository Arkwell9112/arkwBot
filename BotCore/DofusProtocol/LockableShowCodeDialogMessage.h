#ifndef LOCKABLESHOWCODEDIALOGMESSAGE
#define LOCKABLESHOWCODEDIALOGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class LockableShowCodeDialogMessage : public NetworkInterface {
public:
    bool changeOrUse = false;
    unsigned int codeSize = 0;
    unsigned int protocolId = 6288;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LockableShowCodeDialogMessage(ICustomDataInput &input);

    void _changeOrUseFunc(ICustomDataInput &input);

    void _codeSizeFunc(ICustomDataInput &input);
};

#endif