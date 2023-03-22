#include <iostream>
using namespace std;

int reverse(int x) {
    int temp = x;
    int ret  = 0;

    while (temp > 0) {
        ret  = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}

int main(){
  int A, B;
  // inputkan A dan B
  cin >> A >> B;

  // reverse A dan B
  int A_reversed = reverse(A);
  int B_reversed = reverse(B);
  // Jumlahkan reverse A dan B
  int C = A_reversed + B_reversed;
  // Membalikkan C
  int C_reversed = reverse(C);

  // Cetak C
  cout << C_reversed << endl;
}