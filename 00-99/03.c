/*
 * he prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143?
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    long n = 8462696833;
    long fac = 2;
    long final = 0;
    while (n > 1) {
        if (n % fac == 0) {
            final = fac;
            n /= fac;
            while (n % fac == 0) n /= fac;
        }
        fac += 1;
    }
    printf("the largest prime factor of the number 600851475143 is %ld\n", final);
    return 0;
}
