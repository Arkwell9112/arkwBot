#include "WorldPath.h"
#include "../BotException.h"

WorldPath::WorldPath(json &input) : begin(0), end(0), position(0), incremental(0), isReverse(true) {
    auto it = input.begin();
    while (it != input.end()) {
        points.emplace_back(*it);
        it++;
    }
}

void WorldPath::init() {
    isReverse = !isReverse;
    if (!isReverse) {
        begin = 0;
        end = (int) (points.size() - 1);
        incremental = 1;
    } else {
        begin = (int) (points.size() - 1);
        end = 0;
        incremental = -1;
    }
    position = begin;
}

const WorldPoint &WorldPath::getPosition() const {
    return points.at(position);
}

void WorldPath::nextPosition() {
    position += incremental;
    if ((isReverse && position < end) || (!isReverse && position > end)) {
        position = end;
    }
}

bool WorldPath::isEnd(const Point &point) const {
    if (position == end && point == points.at(end)) {
        return true;
    }
    return false;
}

void WorldPath::setPosition(const Point &point) {
    for (int i = 0; i < points.size(); i++) {
        if (points.at(i) == point) {
            position = i;
            return;
        }
    }

    throw BotException(14);
}