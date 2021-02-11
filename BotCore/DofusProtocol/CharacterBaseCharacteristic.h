#ifndef CHARACTERBASECHARACTERISTIC
#define CHARACTERBASECHARACTERISTIC

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterBaseCharacteristic : public NetworkInterface {
public:
    int base = 0;
    int additionnal = 0;
    int objectsAndMountBonus = 0;
    int alignGiftBonus = 0;
    int contextModif = 0;
    unsigned int protocolId = 5795;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterBaseCharacteristic(ICustomDataInput &input);

    void _baseFunc(ICustomDataInput &input);

    void _additionnalFunc(ICustomDataInput &input);

    void _objectsAndMountBonusFunc(ICustomDataInput &input);

    void _alignGiftBonusFunc(ICustomDataInput &input);

    void _contextModifFunc(ICustomDataInput &input);
};

#endif