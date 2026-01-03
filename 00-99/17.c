#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int sum = 0;
    // one, two, three, four, five, six, seven, eight, nine
    int d1s[9] = {3, 3, 5, 4, 4, 3, 5, 5, 4};
    // ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, seventeen, eighteen, nineteen
    int d2s[10] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
    // twenty, thirty, forty, fifty, sixty, seventy, eighty, ninety
    int d3s[8] = {6, 6, 5, 5, 5, 7, 6, 6};
    // one hundred, two hundred, ...
    int hrds[9];
    for (int i = 0; i < 9; ++i) hrds[i] = 7 + d1s[i];
    // 1 - 9
    for (int i = 0; i < 9; ++i) sum += d1s[i];
    // 10 - 19
    for (int i = 0; i < 10; ++i) sum += d2s[i];
    // 20, 30, ..., 90
    for (int i = 0; i < 8; ++i) sum += d3s[i];
    // [2-9][1-9]
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 9; ++j) {
            sum += d3s[i] + d1s[j];
        }
    }
    printf("%d\n", sum);
    // [1-9][0-9][0-9] (indlude "and")
    sum *= 10;
    for (int i = 0; i < 9; ++i) sum += 100 * hrds[i] + 99 * 3;
    // one thousand
    sum += 11;
    printf("%d\n", sum);
    return 0;
}
