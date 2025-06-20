#include <iostream>

using namespace std;

int fibonaccirecrusivo(int n) {
  if (n <= 1) {return n;}
  return fibonaccirecrusivo(n-1) + fibonaccirecrusivo(n-2);
}

int main () {
  int termos;
  cout<<"Digite a quantidade de termos de Fibonacci ";
  cout<<"\n";
  cin>>termos;

  for (int i = 0; i < termos; ++i)
  {
    cout<<fibonaccirecrusivo(i)<< " ";
  }
  

}