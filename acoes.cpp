#include <iostream>
using namespace std;
int empresas(long long N, long long K) {
  if (N <= K) return 1;
  return empresas(N/2, K) + empresas((N+1)/2, K);
}
int main () {
  long long int n,k;
  while (cin >> n >> k && (n != 0 || k != 0))
  {
    cout << empresas(n, k) << endl;
  }
  
}
