#include "GameContextRemoveMultipleElementsWithEventsMessage.h"

void GameContextRemoveMultipleElementsWithEventsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextRemoveMultipleElementsWithEventsMessage(input);
}

void
GameContextRemoveMultipleElementsWithEventsMessage::deserializeAs_GameContextRemoveMultipleElementsWithEventsMessage(
        ICustomDataInput &input) {
    unsigned int _val1 = 0;
    GameContextRemoveMultipleElementsMessage::deserialize(input);
    unsigned int _elementEventIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _elementEventIdsLen; _i1++) {
        _val1 = input.readByte();

        this->elementEventIds.push_back(_val1);
    }
}

void GameContextRemoveMultipleElementsWithEventsMessage::_elementEventIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->elementEventIds.push_back(_val);
}

