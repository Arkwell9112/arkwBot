#ifndef DEBUGCLEARHIGHLIGHTCELLSMESSAGE
#define DEBUGCLEARHIGHLIGHTCELLSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class DebugClearHighlightCellsMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2608;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DebugClearHighlightCellsMessage(ICustomDataInput &input);
};

#endif