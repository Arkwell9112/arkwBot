#ifndef MOUNTHARNESSCOLORSUPDATEREQUESTMESSAGE
#define MOUNTHARNESSCOLORSUPDATEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MountHarnessColorsUpdateRequestMessage : public NetworkInterface {
public:
    bool useHarnessColors = false;
    unsigned int protocolId = 3146;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MountHarnessColorsUpdateRequestMessage(ICustomDataInput &input);

    void _useHarnessColorsFunc(ICustomDataInput &input);
};

#endif