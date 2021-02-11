#ifndef IDENTIFICATIONMESSAGE
#define IDENTIFICATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>
#include "Version.h"

class IdentificationMessage : public NetworkInterface {
public:
    Version version;
    std::string lang;
    std::vector<int> credentials;
    int serverId = 0;
    bool autoconnect = false;
    bool useCertificate = false;
    bool useLoginToken = false;
    double sessionOptionalSalt = 0;
    std::vector<unsigned int> failedAttempts;
    unsigned int protocolId = 5667;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdentificationMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _langFunc(ICustomDataInput &input);

    void _credentialsFunc(ICustomDataInput &input);

    void _serverIdFunc(ICustomDataInput &input);

    void _sessionOptionalSaltFunc(ICustomDataInput &input);

    void _failedAttemptsFunc(ICustomDataInput &input);
};

#endif