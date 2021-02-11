#ifndef ARKWBOT_FIGHTPOINT_H
#define ARKWBOT_FIGHTPOINT_H

#include "../MapPoint.h"
#include <list>

class FightPoint : public MapPoint {
public:
    explicit FightPoint(unsigned int cellID, bool _isFightMove, char _floor) : MapPoint(cellID),
                                                                               isFightMove(_isFightMove),
                                                                               floor(_floor) {};

    bool isFloorOkTo(const FightPoint &point) const;

    char getFloor() const;

    bool isMove() const;

private:
    bool isFightMove;

    char floor;
};

#endif //ARKWBOT_FIGHTPOINT_H