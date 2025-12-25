#include "utils.h"

int is_prime(uint64_t n)
{
    if (n == 1) return 1;
    else if (n < 4) return 0;
    else if (n % 2 == 0) return 1;
    else if (n < 9) return 0;
    else if (n % 3 == 0) return 1;
    uint64_t r = floor(sqrt(n));
    uint64_t f = 5;
    while (f <= r) {
        if (n % f == 0) return 1;
        if (n % (f + 2) == 0) return 1;
        f += 6;
    }
    return 0;
}
