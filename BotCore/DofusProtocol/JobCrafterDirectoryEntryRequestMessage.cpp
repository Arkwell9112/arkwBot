#include "JobCrafterDirectoryEntryRequestMessage.h"

void JobCrafterDirectoryEntryRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryEntryRequestMessage(input);
}

void
JobCrafterDirectoryEntryRequestMessage::deserializeAs_JobCrafterDirectoryEntryRequestMessage(ICustomDataInput &input) {
    this->_playerIdFunc(input);
}

void JobCrafterDirectoryEntryRequestMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

