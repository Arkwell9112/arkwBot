#include "StartupActionsAllAttributionMessage.h"

void StartupActionsAllAttributionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StartupActionsAllAttributionMessage(input);
}

void StartupActionsAllAttributionMessage::deserializeAs_StartupActionsAllAttributionMessage(ICustomDataInput &input) {
    this->_characterIdFunc(input);
}

void StartupActionsAllAttributionMessage::_characterIdFunc(ICustomDataInput &input) {
    this->characterId = input.readVarUhLong();

}

