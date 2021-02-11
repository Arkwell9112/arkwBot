#include "GameContextRemoveMultipleElementsMessage.h"

void GameContextRemoveMultipleElementsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextRemoveMultipleElementsMessage(input);
}

void GameContextRemoveMultipleElementsMessage::deserializeAs_GameContextRemoveMultipleElementsMessage(
        ICustomDataInput &input) {
    double _val1 = 0;
    unsigned int _elementsIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _elementsIdsLen; _i1++) {
        _val1 = input.readDouble();

        this->elementsIds.push_back(_val1);
    }
}

void GameContextRemoveMultipleElementsMessage::_elementsIdsFunc(ICustomDataInput &input) {
    double _val = input.readDouble();

    this->elementsIds.push_back(_val);
}

