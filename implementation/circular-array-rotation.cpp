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
    size_t q = 0;
    cin >> n >> k >> q;
    vector<int> a;
    int b = 0;
    for (size_t i = 0; i != n; ++i) {
        cin >> b;
        a.push_back(b);
    }
    int x = 0;
    for (size_t i = 0; i != q; ++i) {
        cin >> x;
        cout << a[(x + k * (n - 1)) % n] << endl;
    }
    return 0;
}
