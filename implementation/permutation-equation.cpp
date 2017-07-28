#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    size_t n = 0;
    cin >> n;
    vector<int> p;
    int a = 0;
    for (size_t i = 0; i != n; ++i) {
        cin >> a;
        p.push_back(a);
    }
    map<int, int> m;
    for (size_t i = 0; i != n; ++i) {
        m.emplace(p[p[i] - 1], i + 1);
    }
    for (const pair<int, int>& b : m) {
        cout << b.second << endl;
    }
    return 0;
}
