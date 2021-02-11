#include "MapRunningFightDetailsRequestMessage.h"

void MapRunningFightDetailsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapRunningFightDetailsRequestMessage(input);
}

void MapRunningFightDetailsRequestMessage::deserializeAs_MapRunningFightDetailsRequestMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
}

void MapRunningFightDetailsRequestMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

