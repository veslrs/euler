#include <stdio.h>
#include <math.h>
#define STB_DS_IMPLEMENTATION
#include "../external/stb_ds.h"

int sum_of_factors(int n)
{
    int iter = ceil(sqrt(n));
    int sum = 0;
    while (iter) {
        // asm("brk 0xf000");
        if (n % iter == 0) {
            sum += iter;
            int par = n / iter;
            if (par != iter && par != n) sum += par;
        }
        --iter;
    }
    return sum;
}

int main(void)
{
    // int n = 284;
    // key: n; value: sum
    struct {int key; int value;} *hash = NULL;
    for (int i = 2; i < 10000; ++i) {
        // calculate hash table
        int sum = sum_of_factors(i);
        hmput(hash, i, (int)sum);
    }
    // loop, sum, delete, until empty
    size_t len = hmlenu(hash);
    int sum = 0;
    while (len) {
        // asm("brk 0xf000");
        size_t idx = len - 1;
        // get value of ith element
        int kp = hash[idx].key;
        int vp = (int)hash[idx].value;
        // find use value as key, find next value
        if (kp != vp && hmgeti(hash, vp) >= 0) {
            int vn = (int)hmget(hash, vp);
            // val_new = key_prev => sum += val_new + val_prev
            if (vn == kp) {
                sum += vp + vn;
                // pop next
                hmdel(hash, vn);
            }
        }
        // pop prev
        hmdel(hash, kp);
        // new len
        len = hmlenu(hash);
    }
    printf("%d\n", sum);
    return 0;
}
