#ifndef STATEDELEMENT
#define STATEDELEMENT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StatedElement : public NetworkInterface {
public:
    unsigned int elementId = 0;
    unsigned int elementCellId = 0;
    unsigned int elementState = 0;
    bool onCurrentMap = false;
    unsigned int protocolId = 4858;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatedElement(ICustomDataInput &input);

    void _elementIdFunc(ICustomDataInput &input);

    void _elementCellIdFunc(ICustomDataInput &input);

    void _elementStateFunc(ICustomDataInput &input);

    void _onCurrentMapFunc(ICustomDataInput &input);
};

#endif