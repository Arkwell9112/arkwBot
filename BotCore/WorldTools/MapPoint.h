#ifndef ARKWBOT_MAPPOINT_H
#define ARKWBOT_MAPPOINT_H

#include "Point.h"
#include <vector>

class MapPoint : public Point {
public:
    MapPoint() : Point(0, 0), cellID(0) {};

    explicit MapPoint(unsigned int _cellID);

    unsigned int getCellID() const;

    Point getScreenPosition() const;

protected:
    unsigned int cellID;

private:
    static void init();

    static bool isInit;

    static std::vector<Point> points;
};

#endif //ARKWBOT_MAPPOINT_H