#ifndef ITEMFORPRESET
#define ITEMFORPRESET

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"
#include "Preset.h"

class ItemForPreset : public NetworkInterface {
public:
    unsigned int position = 63;
    unsigned int objGid = 0;
    unsigned int objUid = 0;
    unsigned int protocolId = 8622;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ItemForPreset(ICustomDataInput &input);

    void _positionFunc(ICustomDataInput &input);

    void _objGidFunc(ICustomDataInput &input);

    void _objUidFunc(ICustomDataInput &input);
};

#endif