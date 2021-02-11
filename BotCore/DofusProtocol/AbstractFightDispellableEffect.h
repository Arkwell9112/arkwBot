#ifndef ABSTRACTFIGHTDISPELLABLEEFFECT
#define ABSTRACTFIGHTDISPELLABLEEFFECT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AbstractFightDispellableEffect : public NetworkInterface {
public:
    unsigned int uid = 0;
    double targetId = 0;
    int turnDuration = 0;
    unsigned int dispelable = 1;
    unsigned int spellId = 0;
    unsigned int effectId = 0;
    unsigned int parentBoostUid = 0;
    unsigned int protocolId = 5728;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractFightDispellableEffect(ICustomDataInput &input);

    void _uidFunc(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _turnDurationFunc(ICustomDataInput &input);

    void _dispelableFunc(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _effectIdFunc(ICustomDataInput &input);

    void _parentBoostUidFunc(ICustomDataInput &input);
};

#endif