#include "DocumentReadingBeginMessage.h"

void DocumentReadingBeginMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DocumentReadingBeginMessage(input);
}

void DocumentReadingBeginMessage::deserializeAs_DocumentReadingBeginMessage(ICustomDataInput &input) {
    this->_documentIdFunc(input);
}

void DocumentReadingBeginMessage::_documentIdFunc(ICustomDataInput &input) {
    this->documentId = input.readVarUhShort();

}

