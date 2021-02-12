#include "MapContext.h"

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

const Element &MapContext::getElement(unsigned int identifier) const {
    return elements.at(identifier);
}

const FightPoint &MapContext::getPoint(unsigned int cellID) const {
    return points.at(cellID);
}

unsigned int MapContext::getMapID() const {
    return mapID;
}