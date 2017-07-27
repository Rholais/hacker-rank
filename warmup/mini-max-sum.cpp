#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int a = 0;
    long long int mn = INT64_MAX;
    long long int mx = INT64_MIN;
    long long int s = 0;
    for (size_t i = 0; i != 5; ++i) {
        cin >> a;
        mn = min(mn, a);
        mx = max(mx, a);
        s += a;
    }
    cout << s - mx << ' ' << s - mn;
    return 0;
}
