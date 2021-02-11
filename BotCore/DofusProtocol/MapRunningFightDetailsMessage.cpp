#include "../ProtocolTypeManager.h"
#include "MapRunningFightDetailsMessage.h"

void MapRunningFightDetailsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapRunningFightDetailsMessage(input);
}

void MapRunningFightDetailsMessage::deserializeAs_MapRunningFightDetailsMessage(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    GameFightFighterLightInformations _item2;
    unsigned int _id3 = 0;
    GameFightFighterLightInformations _item3;
    this->_fightIdFunc(input);
    unsigned int _attackersLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _attackersLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<GameFightFighterLightInformations>(input, _id2);
        this->attackers.push_back(_item2);
    }
    unsigned int _defendersLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _defendersLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<GameFightFighterLightInformations>(input, _id3);
        this->defenders.push_back(_item3);
    }
}

void MapRunningFightDetailsMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void MapRunningFightDetailsMessage::_attackersFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GameFightFighterLightInformations _item = ProtocolTypeManager::getObject<GameFightFighterLightInformations>(input,
                                                                                                                _id);
    _item.deserialize(input);
    this->attackers.push_back(_item);
}

void MapRunningFightDetailsMessage::_defendersFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    GameFightFighterLightInformations _item = ProtocolTypeManager::getObject<GameFightFighterLightInformations>(input,
                                                                                                                _id);
    _item.deserialize(input);
    this->defenders.push_back(_item);
}

