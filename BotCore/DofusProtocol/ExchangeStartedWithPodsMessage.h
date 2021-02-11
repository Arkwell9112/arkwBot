#ifndef EXCHANGESTARTEDWITHPODSMESSAGE
#define EXCHANGESTARTEDWITHPODSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeStartedMessage.h"

class ExchangeStartedWithPodsMessage : public ExchangeStartedMessage {
public:
    double firstCharacterId = 0;
    unsigned int firstCharacterCurrentWeight = 0;
    unsigned int firstCharacterMaxWeight = 0;
    double secondCharacterId = 0;
    unsigned int secondCharacterCurrentWeight = 0;
    unsigned int secondCharacterMaxWeight = 0;
    unsigned int protocolId = 2697;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartedWithPodsMessage(ICustomDataInput &input);

    void _firstCharacterIdFunc(ICustomDataInput &input);

    void _firstCharacterCurrentWeightFunc(ICustomDataInput &input);

    void _firstCharacterMaxWeightFunc(ICustomDataInput &input);

    void _secondCharacterIdFunc(ICustomDataInput &input);

    void _secondCharacterCurrentWeightFunc(ICustomDataInput &input);

    void _secondCharacterMaxWeightFunc(ICustomDataInput &input);
};

#endif