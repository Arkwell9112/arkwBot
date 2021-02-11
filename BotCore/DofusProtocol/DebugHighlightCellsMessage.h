#ifndef DEBUGHIGHLIGHTCELLSMESSAGE
#define DEBUGHIGHLIGHTCELLSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class DebugHighlightCellsMessage : public NetworkInterface {
public:
    double color = 0;
    std::vector<unsigned int> cells;
    unsigned int protocolId = 8689;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DebugHighlightCellsMessage(ICustomDataInput &input);

    void _colorFunc(ICustomDataInput &input);

    void _cellsFunc(ICustomDataInput &input);
};

#endif