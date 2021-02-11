#include "LogManager.h"
#include "ConfigManager.h"
#include <chrono>
#include <ctime>
#include <iostream>

LogManager LogManager::singleton = LogManager();

LogManager &LogManager::getInstance() {
    return singleton;
}

void LogManager::log(const std::string &&log, double printLevel) {
    if (ConfigManager::getInstance().getPrintLevel() > printLevel) {
        std::string canonLog = getTimedString(log);
        classic << canonLog << std::endl;
        std::cout << canonLog << std::endl;
    }
}

std::string LogManager::getTimedString(const std::string &log) {
    auto time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::string canonString = std::ctime(&time) + std::string(" : ") + log;
    size_t pos = canonString.find('\n');
    canonString.replace(pos, 1, std::string());
    return canonString;
}

void LogManager::init() {
    classic.open(ConfigManager::getInstance().getFilePath() + "\\Log.txt", std::ios_base::trunc);
    extended.open(ConfigManager::getInstance().getFilePath() + "\\ExtendedLog.txt", std::ios_base::trunc);
}

void LogManager::exLog(const std::string &&log) {
    extended << getTimedString(log) << std::endl;
}