#include "GuildEmblem.h"

void GuildEmblem::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildEmblem(input);
}

void GuildEmblem::deserializeAs_GuildEmblem(ICustomDataInput &input) {
    this->_symbolShapeFunc(input);
    this->_symbolColorFunc(input);
    this->_backgroundShapeFunc(input);
    this->_backgroundColorFunc(input);
}

void GuildEmblem::_symbolShapeFunc(ICustomDataInput &input) {
    this->symbolShape = input.readVarUhShort();

}

void GuildEmblem::_symbolColorFunc(ICustomDataInput &input) {
    this->symbolColor = input.readInt();
}

void GuildEmblem::_backgroundShapeFunc(ICustomDataInput &input) {
    this->backgroundShape = input.readByte();

}

void GuildEmblem::_backgroundColorFunc(ICustomDataInput &input) {
    this->backgroundColor = input.readInt();
}

