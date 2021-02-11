#include "MapContext.h"
#include "../BotException.h"

MapContext::MapContext(unsigned int _mapID, ICustomDataInput &input) : Point(0, 0), mapID(_mapID), elements() {
    posX = input.readShort();
    posY = input.readShort();

    unsigned int elemCount = input.readUnsignedInt();
    for (unsigned int i = 0; i < elemCount; i++) {
        unsigned int identifier = input.readUnsignedInt();
        Element elem(identifier, input);
        elements.insert({identifier, elem});
    }

    for (int i = 0; i < 560; i++) {
        bool isMove = input.readBoolean();
        points.emplace_back(i, isMove, 0);
    }
}

unsigned int MapContext::getMapID() const {
    return mapID;
}

const Element &MapContext::getElement(unsigned int identifier) const {
    return elements.at(identifier);
}

const FightPoint &MapContext::getPoint(unsigned int cellID) const {
    return points.at(cellID);
}

const FightPoint &MapContext::getAdjacentPoint(const Point &point, unsigned int orientation) const {
    Point vector(0, 0);
    switch (orientation) {
        case 0:
            vector = Point(1, 0);
            break;
        case 1:
            vector = Point(0, -1);
            break;
        case 2:
            vector = Point(-1, 0);
            break;
        case 3:
            vector = Point(0, 1);
            break;
        default:
            throw BotException(15);
    }

    vector += point;

    if (vector.getPosY() >= -vector.getPosX() && vector.getPosY() <= vector.getPosX() &&
        vector.getPosY() <= 14 + 13 - vector.getPosX()) {
        if (vector.getPosY() < vector.getPosX() - (20 - (-19))) {
            throw BotException(16);
        }
    }

    unsigned int cellID =
            (vector.getPosX() - vector.getPosY()) * 14 + vector.getPosY() + (vector.getPosX() - vector.getPosY()) / 2;

    return points.at(cellID);
}