#ifndef GAMEACTIONMARK
#define GAMEACTIONMARK

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameActionMarkedCell.h"

class GameActionMark : public NetworkInterface {
public:
    double markAuthorId = 0;
    unsigned int markTeamId = 2;
    unsigned int markSpellId = 0;
    int markSpellLevel = 0;
    int markId = 0;
    int markType = 0;
    int markimpactCell = 0;
    std::vector<GameActionMarkedCell> cells;
    bool active = false;
    unsigned int protocolId = 5022;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionMark(ICustomDataInput &input);

    void _markAuthorIdFunc(ICustomDataInput &input);

    void _markTeamIdFunc(ICustomDataInput &input);

    void _markSpellIdFunc(ICustomDataInput &input);

    void _markSpellLevelFunc(ICustomDataInput &input);

    void _markIdFunc(ICustomDataInput &input);

    void _markTypeFunc(ICustomDataInput &input);

    void _markimpactCellFunc(ICustomDataInput &input);

    void _cellsFunc(ICustomDataInput &input);

    void _activeFunc(ICustomDataInput &input);
};

#endif