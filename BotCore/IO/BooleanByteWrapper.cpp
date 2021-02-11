#include "BooleanByteWrapper.h"

bool BooleanByteWrapper::getFlag(unsigned int box, unsigned int pos) {
    return ((box >> pos) & 1) == 1;
}
