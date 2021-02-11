#include "../ProtocolTypeManager.h"
#include "GameRolePlayShowMultipleActorsMessage.h"

void GameRolePlayShowMultipleActorsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayShowMultipleActorsMessage(input);
}

void
GameRolePlayShowMultipleActorsMessage::deserializeAs_GameRolePlayShowMultipleActorsMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    GameRolePlayActorInformations _item1;
    unsigned int _informationsListLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _informationsListLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<GameRolePlayActorInformations>(input, _id1);
        this->informationsList.push_back(_item1);
    }
}

void GameRolePlayShowMultipleActorsMessage::_informationsListFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GameRolePlayActorInformations _item = ProtocolTypeManager::getObject<GameRolePlayActorInformations>(input, _id);
    _item.deserialize(input);
    this->informationsList.push_back(_item);
}

