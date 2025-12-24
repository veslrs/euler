#include <stdio.h>

int main(void)
{
    int lim = 100;
    int diff = 0;
    for (int i = 1; i < lim; ++i) {
        int par = 0;
        for (int j = i + 1; j <= lim; ++j) {
            par += j;
        }
        diff += i * par;
    }
    diff *= 2;
    printf("the difference for n = %d: %d\n", lim, diff);
    return 0;
}
