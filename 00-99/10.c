#include <stdio.h>
#include "../utils.h"

int main(void)
{
    uint64_t lim = 2000000;
    uint64_t sum = 0;
    while (lim) {
        if (is_prime(lim) == 0) sum += lim;
        --lim;
    }
    printf("the sum of all the primes below two million: %llu\n", sum);
}
