#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    size_t n = 0;
    cin >> n;
    __int128 a = 1;
    for (size_t i = 0; i != n; ++i) {
        a *= (i + 1);
    }
    cout << a;
    return 0;
}
