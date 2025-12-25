#include <stdio.h>
#include <math.h>

int main(void)
{
    int sum = 1000;
    int iter = sum / 2;
    int a = 0;
    int b = 0;
    int c = 0;
    for (int i = 1; i <= iter; ++i) {
        for (int j = 1; j <= iter; ++j) {
            if (i + j + round(sqrt(i * i + j * j)) == sum && i * i + j * j == round(sqrt(i * i + j * j)) * round(sqrt(i * i + j * j))) {
                a = i;
                b = j;
                c = round(sqrt(i * i + j * j));
                goto finish;
            }
        }
    }
finish:
    printf("%d^2 + %d^2 = %d\n", a, b, a * a + b * b);
    printf("%d^2 = %d\n", c, c * c);
    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
    printf("%d * %d * %d = %d\n", a, b, c, a * b * c);
    return 0;
}
