#include "Element.h"

Element::Element(unsigned int _identifier, ICustomDataInput &input) : MapPoint(0), identifier(_identifier) {
    MapPoint point(input.readUnsignedShort());
    cellID = point.getCellID();
    posX = point.getPosX();
    posY = point.getPosY();
}

unsigned int Element::getIdentifier() const {
    return identifier;
}