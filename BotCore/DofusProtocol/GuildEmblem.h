#ifndef GUILDEMBLEM
#define GUILDEMBLEM

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildEmblem : public NetworkInterface {
public:
    unsigned int symbolShape = 0;
    int symbolColor = 0;
    unsigned int backgroundShape = 0;
    int backgroundColor = 0;
    unsigned int protocolId = 1127;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildEmblem(ICustomDataInput &input);

    void _symbolShapeFunc(ICustomDataInput &input);

    void _symbolColorFunc(ICustomDataInput &input);

    void _backgroundShapeFunc(ICustomDataInput &input);

    void _backgroundColorFunc(ICustomDataInput &input);
};

#endif