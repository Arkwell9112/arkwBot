#include "Point.h"
#include "../BotException.h"

int Point::getPosX() const {
    return posX;
}

int Point::getPosY() const {
    return posY;
}

bool Point::operator==(const Point &point) const {
    return posX == point.posX && posY == point.posY;
}

bool Point::operator!=(const Point &point) const {
    return !(*this == point);
}

Point &Point::operator+=(const Point &point) {
    posX += point.posX;
    posY += point.posY;
    return *this;
}

Point &Point::operator-=(const Point &point) {
    posX -= point.posX;
    posY -= point.posY;
    return *this;
}

Point Point::operator+(const Point &point) const {
    Point p = *this;
    p += point;
    return p;
}

Point Point::operator-(const Point &point) const {
    Point p = *this;
    p -= point;
    return p;
}

unsigned int Point::getOrientationTo(const Point &point) const {
    if (*this == point) {
        throw BotException(15);
    }
    if (posX == point.getPosX()) {
        if (posY >= point.getPosY()) {
            return 0;
        }
        return 2;
    }
    if (posY == point.getPosY()) {
        if (posX >= point.getPosX()) {
            return 3;
        }
        return 1;
    }

    throw BotException(15);
}

unsigned int Point::getManhattanDistanceTo(const Point &point) const {
    return abs(point.getPosX() - posX) + abs(point.getPosY() - posY);
}