#ifdef __cplusplus
extern "C"
{
#endif
#include <stdint.h>
#include <stdbool.h>
#include "add.h"
#ifdef __cplusplus
}
#endif

const uint8_t test = 0;

uint8_t testArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

uint8_t Add(uint8_t a, uint8_t b)
{
    return a + b;
}

static bool checkOverflow(uint16_t x, uint16_t y)
{
    // BAD: 型の昇格により比較は常に偽となる.
    return (x + y < x);
}
