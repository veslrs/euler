#include <iostream>

int main(void)
{
    int lim = 1000;
    int sum = 0;
    for (auto i = 0; i < lim; ++i) {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
    }
    std::cout << "sum of all the multiples of 3 or 5 below 10 = " << sum << '\n';
    return 0;
}
