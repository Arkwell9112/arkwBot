#include "ActorOrientation.h"

void ActorOrientation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ActorOrientation(input);
}

void ActorOrientation::deserializeAs_ActorOrientation(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_directionFunc(input);
}

void ActorOrientation::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

void ActorOrientation::_directionFunc(ICustomDataInput &input) {
    this->direction = input.readByte();

}

