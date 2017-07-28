#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

std::ostream&
operator<<(std::ostream& dest, __int128_t value)
{
    std::ostream::sentry s(dest);
    if (s) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[128];
        char* d = std::end(buffer);
        do
        {
            --d;
            *d = "0123456789"[tmp % 10];
            tmp /= 10;
        } while (tmp != 0);
        if (value < 0) {
            --d;
            *d = '-';
        }
        int len = std::end(buffer) - d;
        if (dest.rdbuf()->sputn(d, len) != len) {
            dest.setstate(std::ios_base::badbit);
        }
    }
    return dest;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    size_t n = 0;
    cin >> n;
    __int128 a = 1;
    for (size_t i = 0; i != n; ++i) {
        a *= (i + 1);
    }
    long long b = a >> 32;
    long long c = a;
    cout << a;
    return 0;
}
