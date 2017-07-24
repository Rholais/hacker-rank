#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<unsigned> a = { 0, 0, 0 };
    vector<unsigned> b = { 0, 0, 0 };
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    unsigned c = 0;
    unsigned d = 0;
    for (size_t i = 0; i != 3; ++i) {
        if (a[i] > b[i]) {
            ++c;
        } else if (a[i] < b[i]) {
            ++d;
        }
    }
    cout << c << '\t' << d;
    return 0;
}
