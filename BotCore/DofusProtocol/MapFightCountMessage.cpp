#include "MapFightCountMessage.h"

void MapFightCountMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapFightCountMessage(input);
}

void MapFightCountMessage::deserializeAs_MapFightCountMessage(ICustomDataInput &input) {
    this->_fightCountFunc(input);
}

void MapFightCountMessage::_fightCountFunc(ICustomDataInput &input) {
    this->fightCount = input.readVarUhShort();

}

