#include <cstdio>
#include <iostream>
using namespace std;

int reverse(int x) {
  int temp = x;
  int ret = 0;

  while (temp > 0) {
    ret = (ret * 10) + (temp % 10);
    temp = temp / 10;
  }

  return ret;
}

int main() {
  int a, b;
  cin >> a >> b;

  int hasil = reverse(a) + reverse(b);
  int hasil_reversed = reverse(hasil);

  cout << hasil_reversed << endl;
}