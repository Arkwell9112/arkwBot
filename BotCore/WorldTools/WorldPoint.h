#ifndef ARKWBOT_WORLDPOINT_H
#define ARKWBOT_WORLDPOINT_H

#include "Point.h"
#include "../../Libs/JSON/JSON.hpp"
#include <vector>
#include <string>

using json = nlohmann::json;

class WorldPoint : public Point {
public:
    explicit WorldPoint(json &input);

    const std::string &getAction() const;

    const std::vector<int> &getParameters() const;

private:
    std::string action;

    std::vector<int> parameters;
};

#endif //ARKWBOT_WORLDPOINT_H