#include <iostream>
using namespace std;

int main() {
  // deklrasi baris, kolom dan array
  int baris;
  int kolom;
  int matriks[105][105];

  // input baris dan kolom
  cin >> baris >> kolom;

  // meminta input untuk matriks
  // looping baris
  for(int i = 1; i <= baris; i++) {
    // looping kolom
    for(int j=1; j <= kolom; j++) {
      cin >> matriks[i][j];
    }
  }

  // output matriks ditranspose
  // looping baris
  for(int i = 1; i <= kolom; i++){
    for(int j = baris; j >= 1; j--){
      cout << matriks[j][i] << " ";
    }

    cout << endl;
  }
}