#include <iostream>
#include <vector>
using namespace std;

int main () {
  long long n;
  cin >> n;
  long long s = n*(n+1)/2;
  if (s % 2 != 0) {
    cout << "NO\n";
    return 0;
  }
  cout << "YES\n";
  vector<int> set1, set2;
  long long alvo = s/2;
  for (int i = n; i >= 1 ; i--){
    if (i <= alvo) {
      set1.push_back(i);
      alvo -= i;
    }
    else {
      set2.push_back(i);
    }
  }
  int final1 = set1.size();
  int final2 = set2.size();
  cout << set1.size() << endl;
  for (int i = 0; i < final1; i++){
    cout << set1[i] << " ";
  }
  cout << endl;
  cout << set2.size() << endl;
  for (int i = 0; i < final2; i++){
    cout << set2[i] << " ";
  }
  cout << endl;
  return 0;
}