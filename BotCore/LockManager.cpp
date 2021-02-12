#include "LockManager.h"

LockManager LockManager::singleton = LockManager();

LockManager &LockManager::getInstance() {
    return singleton;
}

std::mutex &LockManager::getLock() {
    return mtx;
}