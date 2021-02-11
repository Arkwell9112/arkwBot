#include "FightPoint.h"

bool FightPoint::isMove() const {
    return isFightMove;
}

char FightPoint::getFloor() const {
    return floor;
}

bool FightPoint::isFloorOkTo(const FightPoint &point) const {
    return (abs(floor - point.getFloor()) <= 3);
}