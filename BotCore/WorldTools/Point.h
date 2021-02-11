#ifndef ARKWBOT_POINT_H
#define ARKWBOT_POINT_H


class Point {
public:
    Point(int _posX, int _posY) : posX(_posX), posY(_posY) {};

    int getPosX() const;

    int getPosY() const;

    unsigned int getOrientationTo(const Point &point) const;

    unsigned int getManhattanDistanceTo(const Point &point) const;

    bool operator==(const Point &point) const;

    bool operator!=(const Point &point) const;

    Point &operator+=(const Point &point);

    Point &operator-=(const Point &point);

    Point operator+(const Point &point) const;

    Point operator-(const Point &point) const;

protected:
    int posX;
    int posY;
};

#endif //ARKWBOT_POINT_H