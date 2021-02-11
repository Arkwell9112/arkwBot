#ifndef ARKWBOT_MODULEINTERFACE_H
#define ARKWBOT_MODULEINTERFACE_H

class ModuleInterface {
public:
    virtual void moduleCallBack(void *child) = 0;
};

#endif //ARKWBOT_MODULEINTERFACE_H