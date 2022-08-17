#include <iostream>
using namespace std;

int main() {
  int num;
  int factor;
  int divisor;
  int ans;

  cout << "What number do you want to see the factors of? ";
  cin >> num;
  for (divisor = 1; divisor <= num; divisor++) {
    ans = num % divisor; 
   if ( ans == 0) {
    cout << divisor << "  ";
   }
  }
  return 0;
}

