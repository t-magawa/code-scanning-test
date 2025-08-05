#include <stdint.h>
#include <stdbool.h>

bool checkOverflow(uint16_t x, uint16_t y)
{
    // BAD: 型の昇格により比較は常に偽となる.
    return (x + y < x);
}
