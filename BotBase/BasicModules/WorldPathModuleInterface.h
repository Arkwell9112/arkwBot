#ifndef ARKWBOT_WORLDPATHMODULEINTERFACE_H
#define ARKWBOT_WORLDPATHMODULEINTERFACE_H

#include "MapContextModule.h"
#include "../../BotCore/WorldTools/WorldPath.h"

class WorldPathModuleInterface {
public:
    virtual void init(WorldPath &path, const MapContextModule &contextModule) = 0;

    virtual void cancel() = 0;
};

#endif //ARKWBOT_WORLDPATHMODULEINTERFACE_H