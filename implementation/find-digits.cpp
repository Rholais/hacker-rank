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
    unsigned n = 0;
    for (size_t i = 0; i != t; ++i) {
        cin >> n;
        unsigned a = 0;
        for (size_t j = n; j; j /= 10) {
            unsigned b = j % 10;
            if (b && !(n % b)) {
                ++a;
            }
        }
        cout << a << endl;
    }
    return 0;
}
