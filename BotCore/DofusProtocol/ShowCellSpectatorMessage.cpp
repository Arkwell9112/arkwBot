#include "ShowCellSpectatorMessage.h"

void ShowCellSpectatorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShowCellSpectatorMessage(input);
}

void ShowCellSpectatorMessage::deserializeAs_ShowCellSpectatorMessage(ICustomDataInput &input) {
    ShowCellMessage::deserialize(input);
    this->_playerNameFunc(input);
}

void ShowCellSpectatorMessage::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

