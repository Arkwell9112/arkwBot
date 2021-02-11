#ifndef ARKWBOT_COLLECTABLE_H
#define ARKWBOT_COLLECTABLE_H

#include "Point.h"
#include "../../Libs/JSON/JSON.hpp"

using json = nlohmann::json;

class Collectable : public Point {
public:
    explicit Collectable(json &input);

    const std::string &getName() const;

    unsigned int getID() const;

private:
    std::string name;

    unsigned int ID;
};

#endif //ARKWBOT_COLLECTABLE_H