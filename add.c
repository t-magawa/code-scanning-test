#ifdef __cplusplus
extern "C"
{
#endif
#include "add.h"
#ifdef __cplusplus
}
#endif

const uint8_t test = 0;

uint8_t Add(uint8_t a, uint8_t b)
{
    return a + b;
}

uint8_t Test(void)
{
    test = 1; // This is a test variable
}
