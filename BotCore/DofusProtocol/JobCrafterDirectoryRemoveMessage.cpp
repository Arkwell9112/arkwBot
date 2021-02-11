#include "JobCrafterDirectoryRemoveMessage.h"

void JobCrafterDirectoryRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryRemoveMessage(input);
}

void JobCrafterDirectoryRemoveMessage::deserializeAs_JobCrafterDirectoryRemoveMessage(ICustomDataInput &input) {
    this->_jobIdFunc(input);
    this->_playerIdFunc(input);
}

void JobCrafterDirectoryRemoveMessage::_jobIdFunc(ICustomDataInput &input) {
    this->jobId = input.readByte();

}

void JobCrafterDirectoryRemoveMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

