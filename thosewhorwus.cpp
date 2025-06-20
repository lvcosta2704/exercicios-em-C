#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main () {
  int t;
  cin >> t;

  while (t--)
  {
    int m, n;
    cin >> n >> m;
    vector<vector<int>> matriz(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++)
      {
        cin >> matriz[i][j];
      } 
    }
    
    
  }
  

}