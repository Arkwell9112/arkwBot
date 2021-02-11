#ifndef HUMANOPTIONTITLE
#define HUMANOPTIONTITLE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "HumanOption.h"

class HumanOptionTitle : public HumanOption {
public:
    unsigned int titleId = 0;
    std::string titleParam;
    unsigned int protocolId = 7090;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanOptionTitle(ICustomDataInput &input);

    void _titleIdFunc(ICustomDataInput &input);

    void _titleParamFunc(ICustomDataInput &input);
};

#endif