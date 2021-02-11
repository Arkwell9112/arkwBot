#include "../ProtocolTypeManager.h"
#include "BreachBranchesMessage.h"

void BreachBranchesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachBranchesMessage(input);
}

void BreachBranchesMessage::deserializeAs_BreachBranchesMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    ExtendedBreachBranch _item1;
    unsigned int _branchesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _branchesLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<ExtendedBreachBranch>(input, _id1);
        this->branches.push_back(_item1);
    }
}

void BreachBranchesMessage::_branchesFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    ExtendedBreachBranch _item = ProtocolTypeManager::getObject<ExtendedBreachBranch>(input, _id);
    _item.deserialize(input);
    this->branches.push_back(_item);
}

