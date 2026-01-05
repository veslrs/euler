#include <stdio.h>

int main(void)
{
    const int nlp[] = {31, 28, 31, 30, 31, 30, 
                       31, 31, 30, 31, 30, 31};
    const int lp[] = {31, 29, 31, 30, 31, 30, 
                      31, 31, 30, 31, 30, 31};
    // const int nnlp = 75;
    // const int nlp = 26;
    int sum = 0;
    int dc = 0;
    // 1900-1-1 -> 0 => 0 % 7 = 0
    for (int i = 0; i < 101; ++i) {
        // leap year? 
        if (i % 4 == 0) {
            for (int j = 0; j < 12; ++j) {
                for (int k = 0; k < lp[j]; ++k) {
                    // which day? (1 -> Monday, ...)
                    int d = dc % 7 + 1;
                    ++dc;
                    if (i > 0 && k == 0 && d == 7) ++sum;
                }
            }
        } else {
            for (int j = 0; j < 12; ++j) {
                for (int k = 0; k < nlp[j]; ++k) {
                    // which day? (1 -> Monday, ...)
                    int d = dc % 7 + 1;
                    ++dc;
                    if (i > 0 && k == 0 && d == 7) ++sum;
                }
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
