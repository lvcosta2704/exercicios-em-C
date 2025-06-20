#include <iostream>
using namespace std;

int main () {
    int termos;
    cin >> termos;
    const int MOD = 1000000007;
    long long a = 0, b = 1, c;
    if (termos == 0) cout << 0 << endl;
    else if (termos == 1) cout << 1 << endl;
    else {
        for (int i = 2; i <= termos; ++i) {
            c = (a + b) % MOD;
            a = b;
            b = c;
        }
        cout << b << endl;
    }
    return 0;
}