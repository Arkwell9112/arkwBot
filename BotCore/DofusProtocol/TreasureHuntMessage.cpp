#include "../ProtocolTypeManager.h"
#include "TreasureHuntMessage.h"

void TreasureHuntMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntMessage(input);
}

void TreasureHuntMessage::deserializeAs_TreasureHuntMessage(ICustomDataInput &input) {
    unsigned int _id3 = 0;
    TreasureHuntStep _item3;
    TreasureHuntFlag _item8;
    this->_questTypeFunc(input);
    this->_startMapIdFunc(input);
    unsigned int _knownStepsListLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _knownStepsListLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<TreasureHuntStep>(input, _id3);
        this->knownStepsList.push_back(_item3);
    }
    this->_totalStepCountFunc(input);
    this->_checkPointCurrentFunc(input);
    this->_checkPointTotalFunc(input);
    this->_availableRetryCountFunc(input);
    unsigned int _flagsLen = input.readUnsignedShort();
    for (unsigned int _i8 = 0; _i8 < _flagsLen; _i8++) {
        _item8.deserialize(input);
        this->flags.push_back(_item8);
    }
}

void TreasureHuntMessage::_questTypeFunc(ICustomDataInput &input) {
    this->questType = input.readByte();

}

void TreasureHuntMessage::_startMapIdFunc(ICustomDataInput &input) {
    this->startMapId = input.readDouble();

}

void TreasureHuntMessage::_knownStepsListFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    TreasureHuntStep _item = ProtocolTypeManager::getObject<TreasureHuntStep>(input, _id);
    _item.deserialize(input);
    this->knownStepsList.push_back(_item);
}

void TreasureHuntMessage::_totalStepCountFunc(ICustomDataInput &input) {
    this->totalStepCount = input.readByte();

}

void TreasureHuntMessage::_checkPointCurrentFunc(ICustomDataInput &input) {
    this->checkPointCurrent = input.readVarUhInt();

}

void TreasureHuntMessage::_checkPointTotalFunc(ICustomDataInput &input) {
    this->checkPointTotal = input.readVarUhInt();

}

void TreasureHuntMessage::_availableRetryCountFunc(ICustomDataInput &input) {
    this->availableRetryCount = input.readInt();
}

void TreasureHuntMessage::_flagsFunc(ICustomDataInput &input) {
    TreasureHuntFlag _item;
    _item.deserialize(input);
    this->flags.push_back(_item);
}

