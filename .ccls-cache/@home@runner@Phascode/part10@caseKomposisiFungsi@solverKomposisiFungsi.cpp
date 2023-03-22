#include <iostream>
using namespace std;

int mutlak(int a) {
  if (a < 0) {
    return a * -1;
  } else {
    return a;
  }
}

int fungsi(int A, int x, int B) {
  int hasil1 = (A*x) + B;
  int hasil_asli = mutlak(hasil1);
  return hasil_asli;
}

int main() {
  int A, B, K, x, result;
  cin >> A >> B >> K >> x;

  result = fungsi (A, x, B);
  for(int i = 2; i <= K; i++) {
    result = fungsi(A, result, B);
  }

  cout << result << endl;
}