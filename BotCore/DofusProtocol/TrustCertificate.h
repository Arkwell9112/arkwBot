#ifndef TRUSTCERTIFICATE
#define TRUSTCERTIFICATE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class TrustCertificate : public NetworkInterface {
public:
    unsigned int id = 0;
    std::string hash;
    unsigned int protocolId = 8671;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TrustCertificate(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _hashFunc(ICustomDataInput &input);
};

#endif