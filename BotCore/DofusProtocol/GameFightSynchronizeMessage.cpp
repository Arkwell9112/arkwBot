#include "../ProtocolTypeManager.h"
#include "GameFightSynchronizeMessage.h"

void GameFightSynchronizeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightSynchronizeMessage(input);
}

void GameFightSynchronizeMessage::deserializeAs_GameFightSynchronizeMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    GameFightFighterInformations _item1;
    unsigned int _fightersLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _fightersLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<GameFightFighterInformations>(input, _id1);
        this->fighters.push_back(_item1);
    }
}

void GameFightSynchronizeMessage::_fightersFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GameFightFighterInformations _item = ProtocolTypeManager::getObject<GameFightFighterInformations>(input, _id);
    _item.deserialize(input);
    this->fighters.push_back(_item);
}

