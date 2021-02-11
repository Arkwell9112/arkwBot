#ifndef ARKWBOT_ELEMENT_H
#define ARKWBOT_ELEMENT_H

#include "MapPoint.h"
#include "../IO/ICustomDataInput.h"

class Element : public MapPoint {
public:
    Element() : MapPoint(0), identifier(0) {};

    explicit Element(unsigned int _identifier, ICustomDataInput &input);

    unsigned int getIdentifier() const;

private:
    unsigned int identifier;
};

#endif //ARKWBOT_ELEMENT_H