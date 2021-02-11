#include "BasicAckMessage.h"

void BasicAckMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicAckMessage(input);
}

void BasicAckMessage::deserializeAs_BasicAckMessage(ICustomDataInput &input) {
    this->_seqFunc(input);
    this->_lastPacketIdFunc(input);
}

void BasicAckMessage::_seqFunc(ICustomDataInput &input) {
    this->seq = input.readVarUhInt();

}

void BasicAckMessage::_lastPacketIdFunc(ICustomDataInput &input) {
    this->lastPacketId = input.readVarUhShort();

}

