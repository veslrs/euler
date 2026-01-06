#include <stdio.h>
#include <stdlib.h>
#include "gmp.h"

int main(void)
{
    int lim = 100;
    mpz_t nfac;
    mpz_init_set_ui(nfac, 1);
    for (unsigned int i = 2; i <= lim; ++i) {
        mpz_t par;
        mpz_init_set_ui(par, i);
        mpz_mul(nfac, nfac, par);
        mpz_clear(par);
    }
    size_t ndigits = mpz_sizeinbase(nfac, 10);
    char *n = malloc(sizeof(*n) * (ndigits + 2));
    n = mpz_get_str(n, 10, nfac);
    int sum = 0;
    for (int i = 0; i < ndigits - 1; ++i) {
        sum += (int)(n[i] - '0');
    }
    printf("result: %d\n", sum);
    free(n);
    mpz_clear(nfac);
    return 0;
}
