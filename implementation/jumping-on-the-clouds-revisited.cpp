#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    size_t n = 0;
    size_t k = 0;
    cin >> n >> k;
    size_t a = 0;
    bool b = false;
    for (size_t i = 0; i != n; ++i) {
        cin >> b;
        if (!(i % k) && b) {
            ++a;
        }
    }
    cout << 100 - n / k - a * 2;
    return 0;
}
