#include <stdio.h>
#include <stdint.h>
#include <math.h>

uint64_t trig(uint64_t n)
{
    uint64_t sum = 0;
    while (n) {
        sum += n--;
    }
    return sum;
}

uint64_t nfact(uint64_t a)
{
    uint64_t niter = (int)sqrt(a) + 1;
    uint64_t count = 0;
    for (uint64_t i = 0; i < niter; ++i) {
        if (a % i == 0) count += 2;
    }
    return count;
}

int main(void)
{
    uint64_t c = 0;
    uint64_t t = 0;
    uint64_t n = 1;
    while (c < 500) {
        t = trig(n++);
        c = nfact(t);
    }
    printf("%llu, %llu\n", t, c);
    return 0;
}
