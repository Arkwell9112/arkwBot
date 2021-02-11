#ifndef ARKWBOT_WORLDPATH_H
#define ARKWBOT_WORLDPATH_H

#include "WorldPoint.h"

class WorldPath {
public:
    WorldPath() : begin(0), end(0), position(0), incremental(0), isReverse(false) {};

    explicit WorldPath(json &input);

    void init();

    const WorldPoint &getPosition() const;

    void nextPosition();

    bool isEnd(const Point &point) const;

    void setPosition(const Point &point);

private:
    std::vector<WorldPoint> points;

    int begin;

    int end;

    int position;

    int incremental;

    bool isReverse;
};

#endif //ARKWBOT_WORLDPATH_H