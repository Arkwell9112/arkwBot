#include "BasicLatencyStatsMessage.h"

void BasicLatencyStatsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicLatencyStatsMessage(input);
}

void BasicLatencyStatsMessage::deserializeAs_BasicLatencyStatsMessage(ICustomDataInput &input) {
    this->_latencyFunc(input);
    this->_sampleCountFunc(input);
    this->_maxFunc(input);
}

void BasicLatencyStatsMessage::_latencyFunc(ICustomDataInput &input) {
    this->latency = input.readUnsignedShort();

}

void BasicLatencyStatsMessage::_sampleCountFunc(ICustomDataInput &input) {
    this->sampleCount = input.readVarUhShort();

}

void BasicLatencyStatsMessage::_maxFunc(ICustomDataInput &input) {
    this->max = input.readVarUhShort();

}

