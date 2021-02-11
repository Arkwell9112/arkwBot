#include "ConsoleCommandsListMessage.h"

void ConsoleCommandsListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ConsoleCommandsListMessage(input);
}

void ConsoleCommandsListMessage::deserializeAs_ConsoleCommandsListMessage(ICustomDataInput &input) {
    std::string _val1;
    std::string _val2;
    std::string _val3;
    unsigned int _aliasesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _aliasesLen; _i1++) {
        _val1 = input.readUTF();
        this->aliases.push_back(_val1);
    }
    unsigned int _argsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _argsLen; _i2++) {
        _val2 = input.readUTF();
        this->args.push_back(_val2);
    }
    unsigned int _descriptionsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _descriptionsLen; _i3++) {
        _val3 = input.readUTF();
        this->descriptions.push_back(_val3);
    }
}

void ConsoleCommandsListMessage::_aliasesFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->aliases.push_back(_val);
}

void ConsoleCommandsListMessage::_argsFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->args.push_back(_val);
}

void ConsoleCommandsListMessage::_descriptionsFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->descriptions.push_back(_val);
}

