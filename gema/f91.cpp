#include <iostream>
#include <vector>

using namespace std;
int f91(int N){
  if (N <= 100) {
    return f91(f91(N+11));
  }
  else if(N >= 101) {
    return N-10;
  }
}
int main () {
  long long int numero;
  do {
    cin >> numero;
    if (numero > 0){
      cout<<"f91("<< numero << ") = " << f91(numero) << endl;
    }
  } while (numero != 0);

}