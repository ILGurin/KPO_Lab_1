#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m, a;
    unsigned long long result, mp, np;
    cin >> n;
    cin >> m;
    cin >> a;
    if (n % a != 0) {
        np = ceil(((double)n / (double)a));
    }
    else {
        np = n / a;
    }
    if (m % a != 0) {
        mp = ceil(((double)m / (double)a));
    }
    else {
        mp = m / a;
    }
    result = mp * np;
    cout << result << endl;
}
