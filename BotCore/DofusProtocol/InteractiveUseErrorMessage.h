#ifndef INTERACTIVEUSEERRORMESSAGE
#define INTERACTIVEUSEERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class InteractiveUseErrorMessage : public NetworkInterface {
public:
    unsigned int elemId = 0;
    unsigned int skillInstanceUid = 0;
    unsigned int protocolId = 7026;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveUseErrorMessage(ICustomDataInput &input);

    void _elemIdFunc(ICustomDataInput &input);

    void _skillInstanceUidFunc(ICustomDataInput &input);
};

#endif