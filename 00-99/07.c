#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long p = 2;
    int count = 1;
    int n = 10001;
    while (count < n) {
        int info = 0;
        ++p;
        for (unsigned long i = 2; i < p; ++i) {
            if (p % i == 0) {
                info = 1;
                break;
            }
        }
        if (info == 0) ++count;
    }
    printf("the %dth prime number is %lu\n", count, p);
    return 0;
}
