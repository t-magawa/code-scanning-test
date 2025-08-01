#ifdef __cplusplus
extern "C"
{
#endif
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

uint8_t Test(void)
{
    Add(1, 2, 3);

    test = testArray[10];
}

// Function foo's array parameter has a specified size
void foo(int a[10])
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        a[i] = i * 2;
    }
}

void main()
{
    int my_arr[5];
    foo(my_arr); // my_arr is smaller than foo's array parameter, and will cause access to memory outside its bounds
}
