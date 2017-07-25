#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    size_t n = 0;
    int a = 0;
    int p = 0;
    int s = 0;
    cin >> n;
    for (size_t i = 0; i != n; ++i) {
        for (size_t j = 0; j != n; ++j) {
            cin >> a;
            if (i == j) {
                p += a;
            }
            if (i + j == n - 1) {
                s += a;
            }
        }
    }
    cout << abs(p - s);
    return 0;
}
