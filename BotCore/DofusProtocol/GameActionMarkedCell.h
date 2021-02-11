#ifndef GAMEACTIONMARKEDCELL
#define GAMEACTIONMARKEDCELL

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameActionMarkedCell : public NetworkInterface {
public:
    unsigned int cellId = 0;
    int zoneSize = 0;
    int cellColor = 0;
    int cellsType = 0;
    unsigned int protocolId = 2117;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionMarkedCell(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);

    void _zoneSizeFunc(ICustomDataInput &input);

    void _cellColorFunc(ICustomDataInput &input);

    void _cellsTypeFunc(ICustomDataInput &input);
};

#endif