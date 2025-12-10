#include <stdio.h>

int main(void)
{
    long lim = 262000;
    long base = 1;
    long sum = 0;
    while (base <= lim) {
        long square = 0;
        square = base * base;
        if (square % 2 == 1) sum += square;
        base++;
    }
    printf("sum of all odd square numbers under 262000 = %ld\n", sum);
    return 0;
}
