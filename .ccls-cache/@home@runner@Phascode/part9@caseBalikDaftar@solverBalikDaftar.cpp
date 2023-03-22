#include <iostream>
using namespace std;

int main() {
  int arr[101];
  int N = 0;

  // input angka ke array selama tidak EOF menggunakan loop while
  while (scanf("%d", &arr[N]) != EOF) {
    N++;
  }

  // cetak kembali array secara terbalik dan menggunakan endl
  cout << endl;
  for(int i = N - 1; i >= 0; i--) {
    cout << arr[i] << endl;
  }
}