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
    int mx = INT32_MIN;
    unsigned s = 0;
    int a = 0;
    for (size_t i = 0; i != n; ++i) {
        cin >> a;
        if (a > mx) {
            mx = a;
            s = 1;
        } else if (a == mx) {
            ++s;
        }
    }
    cout << s;
    return 0;
}
