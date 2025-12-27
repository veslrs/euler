#include <stdio.h>
#define len 334

int main(void)
{
    int n[len] = {0};
    int niter = 1000;
    int ret = 0;
    n[len - 1] = 1;
    for (int i = 0; i < niter; ++i) {
        int carry = 0;
        for (int j = len - 1; j >= 0; --j) {
            int sum = n[j] * 2 + carry;
            n[j] = sum % 10;
            carry = sum / 10;
        }
    }
    for (int i = 0; i < len; ++i) {
        ret += n[i];
    }
    printf("%d\n", ret);
    return 0;
}
