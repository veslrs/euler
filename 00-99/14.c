#include <stdio.h>
#include <stdint.h>

uint32_t count(uint32_t n)
{
    uint32_t count = 1;
    while (n != 1) {
        ++count;
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
    }
    return count;
}

int main(void)
{
    uint32_t lim = 1000000;
    uint32_t c = 0;
    uint32_t n = 1;
    for (uint32_t i = 1; i < lim; ++i) {
        uint32_t cp = count(i);
        if (cp > c) {
            c = cp;
            n = i;
        }
    }
    printf("%u produces the longest chain: length = %u\n", n, c);
    return 0;
}
