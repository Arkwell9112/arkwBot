#include "../IO/BooleanByteWrapper.h"
#include "GameServerInformations.h"

void GameServerInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameServerInformations(input);
}

void GameServerInformations::deserializeAs_GameServerInformations(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_idFunc(input);
    this->_typeFunc(input);
    this->_statusFunc(input);
    this->_completionFunc(input);
    this->_charactersCountFunc(input);
    this->_charactersSlotsFunc(input);
    this->_dateFunc(input);
}

void GameServerInformations::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->isMonoAccount = BooleanByteWrapper::getFlag(_box0, 0);
    this->isSelectable = BooleanByteWrapper::getFlag(_box0, 1);
}

void GameServerInformations::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhShort();

}

void GameServerInformations::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();
}

void GameServerInformations::_statusFunc(ICustomDataInput &input) {
    this->status = input.readByte();

}

void GameServerInformations::_completionFunc(ICustomDataInput &input) {
    this->completion = input.readByte();

}

void GameServerInformations::_charactersCountFunc(ICustomDataInput &input) {
    this->charactersCount = input.readByte();

}

void GameServerInformations::_charactersSlotsFunc(ICustomDataInput &input) {
    this->charactersSlots = input.readByte();

}

void GameServerInformations::_dateFunc(ICustomDataInput &input) {
    this->date = input.readDouble();

}

