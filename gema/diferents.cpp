#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++){
    cin >> x[i];
  } 
  set<int> sx(x.begin(), x.end());
  cout << sx.size() << endl;  
}