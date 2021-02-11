#ifndef ARKWBOT_LOCKMANAGER_H
#define ARKWBOT_LOCKMANAGER_H

#include <mutex>

class LockManager {
public:
    static LockManager &getInstance();

    std::mutex &getLock();

private:
    LockManager() : mtx() {};

    static LockManager singleton;

    std::mutex mtx;
};


#endif //ARKWBOT_LOCKMANAGER_H
