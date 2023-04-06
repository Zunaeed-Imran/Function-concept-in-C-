#include <iostream>

using namespace std;

// void sum1() {
//   cout << 5 + 6;
// }

// int sum2() {
//   return 5 + 6;
// }

int sum3(int a, int b) {
  return a + b;
}

int main() {
  // sum1();
  // cout << sum2();
  cout << sum3(5, 6);
  cout << sum3(7, 8);
  return 0;
}
