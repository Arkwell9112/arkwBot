#include "WorldPoint.h"

WorldPoint::WorldPoint(json &input) : Point(0, 0) {
    posX = input.at("posX").get<int>();
    posY = input.at("posY").get<int>();
    action = input.at("action").get<std::string>();

    auto it = input.at("parameters").begin();
    while (it != input.at("parameters").end()) {
        parameters.push_back(it->get<int>());
        it++;
    }
}

const std::string &WorldPoint::getAction() const {
    return action;
}

const std::vector<int> &WorldPoint::getParameters() const {
    return parameters;
}