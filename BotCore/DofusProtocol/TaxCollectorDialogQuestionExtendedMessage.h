#ifndef TAXCOLLECTORDIALOGQUESTIONEXTENDEDMESSAGE
#define TAXCOLLECTORDIALOGQUESTIONEXTENDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "TaxCollectorDialogQuestionBasicMessage.h"

class TaxCollectorDialogQuestionExtendedMessage : public TaxCollectorDialogQuestionBasicMessage {
public:
    unsigned int maxPods = 0;
    unsigned int prospecting = 0;
    unsigned int wisdom = 0;
    unsigned int taxCollectorsCount = 0;
    int taxCollectorAttack = 0;
    double kamas = 0;
    double experience = 0;
    unsigned int pods = 0;
    double itemsValue = 0;
    unsigned int protocolId = 9386;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorDialogQuestionExtendedMessage(ICustomDataInput &input);

    void _maxPodsFunc(ICustomDataInput &input);

    void _prospectingFunc(ICustomDataInput &input);

    void _wisdomFunc(ICustomDataInput &input);

    void _taxCollectorsCountFunc(ICustomDataInput &input);

    void _taxCollectorAttackFunc(ICustomDataInput &input);

    void _kamasFunc(ICustomDataInput &input);

    void _experienceFunc(ICustomDataInput &input);

    void _podsFunc(ICustomDataInput &input);

    void _itemsValueFunc(ICustomDataInput &input);
};

#endif