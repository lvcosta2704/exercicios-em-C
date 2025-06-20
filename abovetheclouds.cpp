#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool ok = false;

        for (int i = 1; i < n - 1 && !ok; i++) {
            // Testa b com tamanho 1
            string b1 = s.substr(i, 1);
            string a1 = s.substr(0, i);
            string c1 = s.substr(i + 1);
            if ((a1 + c1).find(b1) != string::npos) {
                ok = true;
                break;
            }

            // Testa b com tamanho 2, se possível
            if (i + 1 < n - 1) {
                string b2 = s.substr(i, 2);
                string a2 = s.substr(0, i);
                string c2 = s.substr(i + 2);
                if ((a2 + c2).find(b2) != string::npos) {
                    ok = true;
                    break;
                }
            }
        }

        cout << (ok ? "Yes" : "No") << "\n";
    }

    return 0;
}