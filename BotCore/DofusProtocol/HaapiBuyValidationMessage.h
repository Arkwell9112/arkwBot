#ifndef HAAPIBUYVALIDATIONMESSAGE
#define HAAPIBUYVALIDATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "HaapiValidationMessage.h"

class HaapiBuyValidationMessage : public HaapiValidationMessage {
public:
    double amount = 0;
    std::string email;
    unsigned int protocolId = 7021;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiBuyValidationMessage(ICustomDataInput &input);

    void _amountFunc(ICustomDataInput &input);

    void _emailFunc(ICustomDataInput &input);
};

#endif