#include <stdio.h>
#include <math.h>

int main(void)
{
    // 100..999
        // 100..999
        // c = a * b
        // c: is even digits?
            // yes: assume n digits, div(c, 10^(n/2)), compare quotient and remainder
            // no: compare c mod 10^(n/2) and c / 10^(1+n/2)

    int final = 0;
    int final_a, final_b;
    for (int a = 100; a < 1000; ++a) {
        for (int b = 100; b < 1000; ++b) {
            int c = a * b;
            int ndigits = (int)log10(c) + 1;
            int n = ndigits / 2;
            int info = 0;
            for (int i = 1; i <= n; ++i) {
                int n_l = ndigits - i;
                int n_r = i;
                int l = c / (int)pow(10, n_l);
                l %= 10;
                int r = c % (int)pow(10, n_r);
                r /= (int)pow(10, i - 1);
                if (l != r) {
                    info = 1;
                    break;
                }
            }
            if ((info == 0) && (c > final)) {
                final = c;
                final_a = a;
                final_b = b;
            }
        }
    }
    printf("the largest palindrome made from the product of two 3-digit numbers is %d * %d = %d\n", final_a, final_b, final);
    return 0;
}
