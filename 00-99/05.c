/*
 * 2520 is the smallest number that can be divided by each of the numbers 
 * from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by 
 * all of the numbers from 1 to 20?
 */

#include <stdio.h>
#include <math.h>

#define N 20
#define NP 8

int main(void)
{
    int p[NP] = {2, 3, 5, 7, 11, 13, 17, 19};
    // int p[NP] = {2, 3, 5, 7};
    int c[NP] = {0};
    int final = 1;
    for (int i = 2; i <= N; ++i) {
        int num = i;
        int count[NP] = {0};
        do {
            for (int j = 0; j < NP; ++j) {
                if (num % p[j] == 0) {
                    num /= p[j];
                    ++count[j];
                    break;
                }
            }
        } while (num != 1);
        for (int k = 0; k < NP; ++k) {
            if (count[k] > c[k]) c[k] = count[k];
        }
    }
    for (int i = 0; i < NP; ++i) {
        final *= (int)pow(p[i], c[i]);
    }
    printf("%d\n", final);
    return 0;
}
