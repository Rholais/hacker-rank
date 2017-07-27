#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    size_t t = 0;
    cin >> t;
    size_t n = 0;
    size_t m = 0;
    size_t s = 0;
    for (size_t i = 0; i != t; ++i) {
        cin >> n >> m >> s;
        cout << (m + s - 2) % n + 1 << endl;
    }
    return 0;
}
