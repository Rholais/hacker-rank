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
    for (size_t i = 0; i != n; ++i) {
        size_t j = 0;
        for (; j != n - i - 1; ++j) {
            cout << ' ';
        }
        for (; j != n; ++j) {
            cout << '#';
        }
        cout << endl;
    }
    return 0;
}
