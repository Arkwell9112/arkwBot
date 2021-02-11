#include "../ProtocolTypeManager.h"
#include "GameActionFightMultipleSummonMessage.h"

void GameActionFightMultipleSummonMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightMultipleSummonMessage(input);
}

void GameActionFightMultipleSummonMessage::deserializeAs_GameActionFightMultipleSummonMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    GameContextSummonsInformation _item1;
    AbstractGameActionMessage::deserialize(input);
    unsigned int _summonsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _summonsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<GameContextSummonsInformation>(input, _id1);
        this->summons.push_back(_item1);
    }
}

void GameActionFightMultipleSummonMessage::_summonsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GameContextSummonsInformation _item = ProtocolTypeManager::getObject<GameContextSummonsInformation>(input, _id);
    _item.deserialize(input);
    this->summons.push_back(_item);
}

