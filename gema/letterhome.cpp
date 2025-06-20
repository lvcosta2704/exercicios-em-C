#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin>>t;
  while (t--)
  {
    int n,s;
    cin>>n>>s;
    vector<int> x(n);

    for (int i = 0; i < n; i++)
    {
      cin>>x[i];  
    }

    int mininX = x[0];
    int maxinX = x[n-1];
    int passos = abs(s - mininX) + (maxinX - mininX);
    int passoalternativo = abs(s-maxinX) + (maxinX - mininX);
    cout << min(passoalternativo, passos) << endl;
  }
  
}