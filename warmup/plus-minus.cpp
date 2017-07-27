#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    size_t n = 0;
    cin >> n;
    unsigned p = 0;
    unsigned m = 0;
    unsigned z = 0;
    int a = 0;
    for (size_t i = 0; i != n; ++i) {
        cin >> a;
        if (a > 0) {
            ++p;
        } else if (a < 0) {
            ++m;
        } else {
            ++z;
        }
    }
    cout << fixed << setprecision(6);
    cout << p / (double)n << endl;
    cout << m / (double)n << endl;
    cout << z / (double)n << endl;
    return 0;
}
