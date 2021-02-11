#ifndef ARKWBOT_MAPCONTEXT_H
#define ARKWBOT_MAPCONTEXT_H

#include "Point.h"
#include "Element.h"
#include "../IO/ICustomDataInput.h"
#include <map>
#include "FightTools/FightPoint.h"

class MapContext : public Point {
public:
    MapContext() : Point(0, 0), mapID(0), elements() {};

    explicit MapContext(unsigned int _mapID, ICustomDataInput &input);

    unsigned int getMapID() const;

    const Element &getElement(unsigned int identifier) const;

    const FightPoint &getPoint(unsigned int cellID) const;

    const FightPoint &getAdjacentPoint(const Point &point, unsigned int orientation) const;

private:
    unsigned int mapID;

    std::map<unsigned int, Element> elements;

    std::vector<FightPoint> points;
};

#endif //ARKWBOT_MAPCONTEXT_H