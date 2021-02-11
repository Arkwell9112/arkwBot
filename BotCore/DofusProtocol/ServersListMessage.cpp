#include "ServersListMessage.h"

void ServersListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServersListMessage(input);
}

void ServersListMessage::deserializeAs_ServersListMessage(ICustomDataInput &input) {
    GameServerInformations _item1;
    unsigned int _serversLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _serversLen; _i1++) {
        _item1.deserialize(input);
        this->servers.push_back(_item1);
    }
    this->_alreadyConnectedToServerIdFunc(input);
    this->_canCreateNewCharacterFunc(input);
}

void ServersListMessage::_serversFunc(ICustomDataInput &input) {
    GameServerInformations _item;
    _item.deserialize(input);
    this->servers.push_back(_item);
}

void ServersListMessage::_alreadyConnectedToServerIdFunc(ICustomDataInput &input) {
    this->alreadyConnectedToServerId = input.readVarUhShort();

}

void ServersListMessage::_canCreateNewCharacterFunc(ICustomDataInput &input) {
    this->canCreateNewCharacter = input.readBoolean();
}

