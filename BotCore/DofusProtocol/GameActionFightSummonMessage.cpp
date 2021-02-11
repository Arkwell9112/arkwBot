#include "../ProtocolTypeManager.h"
#include "GameActionFightSummonMessage.h"

void GameActionFightSummonMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightSummonMessage(input);
}

void GameActionFightSummonMessage::deserializeAs_GameActionFightSummonMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    GameFightFighterInformations _item1;
    AbstractGameActionMessage::deserialize(input);
    unsigned int _summonsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _summonsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<GameFightFighterInformations>(input, _id1);
        this->summons.push_back(_item1);
    }
}

void GameActionFightSummonMessage::_summonsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GameFightFighterInformations _item = ProtocolTypeManager::getObject<GameFightFighterInformations>(input, _id);
    _item.deserialize(input);
    this->summons.push_back(_item);
}

