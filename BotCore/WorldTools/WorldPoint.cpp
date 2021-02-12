#include "WorldPoint.h"

WorldPoint::WorldPoint(json &input) : Point(0, 0) {
    posX = input.at("posX").get<int>();
    posY = input.at("posY").get<int>();
    action = input.at("action").get<std::string>();
    parameters = input.at("parameters");
}

const std::string &WorldPoint::getAction() const {
    return action;
}

const json &WorldPoint::getParameters() const {
    return parameters;
}