#include "GameContextRemoveElementMessage.h"

void GameContextRemoveElementMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextRemoveElementMessage(input);
}

void GameContextRemoveElementMessage::deserializeAs_GameContextRemoveElementMessage(ICustomDataInput &input) {
    this->_idFunc(input);
}

void GameContextRemoveElementMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

