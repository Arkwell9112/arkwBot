#include "MapPoint.h"
#include "../ConfigManager.h"
#include "../BotException.h"

bool MapPoint::isInit = false;

std::vector<Point> MapPoint::points = std::vector<Point>();

unsigned int MapPoint::getCellID() const {
    return cellID;
}

MapPoint::MapPoint(unsigned int _cellID) : Point(0, 0), cellID(0) {
    init();
    if (_cellID >= 0 && _cellID < 560) {
        cellID = _cellID;
        Point &point = points.at(cellID);
        posX = point.getPosX();
        posY = point.getPosY();
    } else {
        throw BotException(5);
    }
}

void MapPoint::init() {
    if (!isInit) {
        int startX = 0;
        int startY = 0;
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 14; j++) {
                points.emplace_back(startX + j, startY + j);
            }
            startX++;
            for (int j = 0; j < 14; j++) {
                points.emplace_back(startX + j, startY + j);
            }
            startY--;
        }
        isInit = true;
    }
}

Point MapPoint::getScreenPosition() const {
    double halfCellWidth = ConfigManager::getInstance().getCellSize(false);
    double halfCellHeight = ConfigManager::getInstance().getCellSize(true);
    const Point &origin = ConfigManager::getInstance().getScreenPoint(5);
    double positionX = ((posX * halfCellWidth) + (posY * halfCellWidth)) + halfCellWidth;
    double positionY = ((posX * halfCellHeight) + (posY * -halfCellHeight)) + halfCellHeight;
    Point position = Point((int) positionX, (int) positionY) + origin;
    return position;
}