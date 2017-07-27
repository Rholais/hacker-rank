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
    cin >> n;
    long long int a = 0;
    long long int s = 0;
    for (size_t i = 0; i != n; ++i) {
        cin >> a;
        s += a;
    }
    cout << s;
    return 0;
}
