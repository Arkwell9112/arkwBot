#include "../IO/BooleanByteWrapper.h"
#include "ServerSettingsMessage.h"

void ServerSettingsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerSettingsMessage(input);
}

void ServerSettingsMessage::deserializeAs_ServerSettingsMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_langFunc(input);
    this->_communityFunc(input);
    this->_gameTypeFunc(input);
    this->_arenaLeaveBanTimeFunc(input);
    this->_itemMaxLevelFunc(input);
}

void ServerSettingsMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->isMonoAccount = BooleanByteWrapper::getFlag(_box0, 0);
    this->hasFreeAutopilot = BooleanByteWrapper::getFlag(_box0, 1);
}

void ServerSettingsMessage::_langFunc(ICustomDataInput &input) {
    this->lang = input.readUTF();
}

void ServerSettingsMessage::_communityFunc(ICustomDataInput &input) {
    this->community = input.readByte();

}

void ServerSettingsMessage::_gameTypeFunc(ICustomDataInput &input) {
    this->gameType = input.readByte();
}

void ServerSettingsMessage::_arenaLeaveBanTimeFunc(ICustomDataInput &input) {
    this->arenaLeaveBanTime = input.readVarUhShort();

}

void ServerSettingsMessage::_itemMaxLevelFunc(ICustomDataInput &input) {
    this->itemMaxLevel = input.readInt();

}

