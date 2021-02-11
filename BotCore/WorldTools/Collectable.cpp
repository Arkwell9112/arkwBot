#include "Collectable.h"

Collectable::Collectable(json &input) : Point(input.at("offsetX").get<int>(), input.at("offsetY").get<int>()),
                                        ID(input.at("id").get<unsigned int>()),
                                        name(input.at("name").get<std::string>()) {

}

const std::string &Collectable::getName() const {
    return name;
}

unsigned int Collectable::getID() const {
    return ID;
}