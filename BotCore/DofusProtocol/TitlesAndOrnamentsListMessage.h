#ifndef TITLESANDORNAMENTSLISTMESSAGE
#define TITLESANDORNAMENTSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class TitlesAndOrnamentsListMessage : public NetworkInterface {
public:
    std::vector<unsigned int> titles;
    std::vector<unsigned int> ornaments;
    unsigned int activeTitle = 0;
    unsigned int activeOrnament = 0;
    unsigned int protocolId = 3463;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TitlesAndOrnamentsListMessage(ICustomDataInput &input);

    void _titlesFunc(ICustomDataInput &input);

    void _ornamentsFunc(ICustomDataInput &input);

    void _activeTitleFunc(ICustomDataInput &input);

    void _activeOrnamentFunc(ICustomDataInput &input);
};

#endif