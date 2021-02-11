#include "../ProtocolTypeManager.h"
#include "InteractiveElement.h"

void InteractiveElement::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveElement(input);
}

void InteractiveElement::deserializeAs_InteractiveElement(ICustomDataInput &input) {
    unsigned int _id3 = 0;
    InteractiveElementSkill _item3;
    unsigned int _id4 = 0;
    InteractiveElementSkill _item4;
    this->_elementIdFunc(input);
    this->_elementTypeIdFunc(input);
    unsigned int _enabledSkillsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _enabledSkillsLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<InteractiveElementSkill>(input, _id3);
        this->enabledSkills.push_back(_item3);
    }
    unsigned int _disabledSkillsLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _disabledSkillsLen; _i4++) {
        _id4 = input.readUnsignedShort();
        _item4 = ProtocolTypeManager::getObject<InteractiveElementSkill>(input, _id4);
        this->disabledSkills.push_back(_item4);
    }
    this->_onCurrentMapFunc(input);
}

void InteractiveElement::_elementIdFunc(ICustomDataInput &input) {
    this->elementId = input.readInt();

}

void InteractiveElement::_elementTypeIdFunc(ICustomDataInput &input) {
    this->elementTypeId = input.readInt();
}

void InteractiveElement::_enabledSkillsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    InteractiveElementSkill _item = ProtocolTypeManager::getObject<InteractiveElementSkill>(input, _id);
    _item.deserialize(input);
    this->enabledSkills.push_back(_item);
}

void InteractiveElement::_disabledSkillsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    InteractiveElementSkill _item = ProtocolTypeManager::getObject<InteractiveElementSkill>(input, _id);
    _item.deserialize(input);
    this->disabledSkills.push_back(_item);
}

void InteractiveElement::_onCurrentMapFunc(ICustomDataInput &input) {
    this->onCurrentMap = input.readBoolean();
}

