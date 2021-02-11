#include "StartupActionsObjetAttributionMessage.h"

void StartupActionsObjetAttributionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StartupActionsObjetAttributionMessage(input);
}

void
StartupActionsObjetAttributionMessage::deserializeAs_StartupActionsObjetAttributionMessage(ICustomDataInput &input) {
    this->_actionIdFunc(input);
    this->_characterIdFunc(input);
}

void StartupActionsObjetAttributionMessage::_actionIdFunc(ICustomDataInput &input) {
    this->actionId = input.readInt();

}

void StartupActionsObjetAttributionMessage::_characterIdFunc(ICustomDataInput &input) {
    this->characterId = input.readVarUhLong();

}

