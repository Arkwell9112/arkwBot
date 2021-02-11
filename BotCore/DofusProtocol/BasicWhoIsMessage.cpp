#include "../IO/BooleanByteWrapper.h"
#include "../ProtocolTypeManager.h"
#include "BasicWhoIsMessage.h"

void BasicWhoIsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicWhoIsMessage(input);
}

void BasicWhoIsMessage::deserializeAs_BasicWhoIsMessage(ICustomDataInput &input) {
    unsigned int _id10 = 0;
    AbstractSocialGroupInfos _item10;
    this->deserializeByteBoxes(input);
    this->_positionFunc(input);
    this->_accountNicknameFunc(input);
    this->_accountIdFunc(input);
    this->_playerNameFunc(input);
    this->_playerIdFunc(input);
    this->_areaIdFunc(input);
    this->_serverIdFunc(input);
    this->_originServerIdFunc(input);
    unsigned int _socialGroupsLen = input.readUnsignedShort();
    for (unsigned int _i10 = 0; _i10 < _socialGroupsLen; _i10++) {
        _id10 = input.readUnsignedShort();
        _item10 = ProtocolTypeManager::getObject<AbstractSocialGroupInfos>(input, _id10);
        this->socialGroups.push_back(_item10);
    }
    this->_playerStateFunc(input);
}

void BasicWhoIsMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->self = BooleanByteWrapper::getFlag(_box0, 0);
    this->verbose = BooleanByteWrapper::getFlag(_box0, 1);
}

void BasicWhoIsMessage::_positionFunc(ICustomDataInput &input) {
    this->position = input.readByte();
}

void BasicWhoIsMessage::_accountNicknameFunc(ICustomDataInput &input) {
    this->accountNickname = input.readUTF();
}

void BasicWhoIsMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

void BasicWhoIsMessage::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

void BasicWhoIsMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void BasicWhoIsMessage::_areaIdFunc(ICustomDataInput &input) {
    this->areaId = input.readShort();
}

void BasicWhoIsMessage::_serverIdFunc(ICustomDataInput &input) {
    this->serverId = input.readShort();
}

void BasicWhoIsMessage::_originServerIdFunc(ICustomDataInput &input) {
    this->originServerId = input.readShort();
}

void BasicWhoIsMessage::_socialGroupsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    AbstractSocialGroupInfos _item = ProtocolTypeManager::getObject<AbstractSocialGroupInfos>(input, _id);
    _item.deserialize(input);
    this->socialGroups.push_back(_item);
}

void BasicWhoIsMessage::_playerStateFunc(ICustomDataInput &input) {
    this->playerState = input.readByte();

}

