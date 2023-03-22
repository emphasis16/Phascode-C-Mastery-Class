#include <iostream>
using namespace std;

int main() {
  // deklrasi variabel baris1, kolom1_baris2, kolom2
  int baris1, kolom1_baris2, kolom2;
  cin >> baris1 >> kolom1_baris2 >> kolom2;

  // deklrasi matriks A, B, dan C
  int matriksA[105][105];
  int matriksB[105][105];
  int matriksC[105][105] = {0};

  // input untuk matriks A
  for(int i=1; i <= baris1; i++){
    for(int j=1; j <= kolom1_baris2; j++){
      cin >> matriksA[i][j];
    }
  }

  // input untuk matriks B
  for(int i=1; i <= kolom1_baris2; i++){
    for(int j=1; j <= kolom2; j++){
      cin >> matriksB[i][j];
    }
  }

  // perhitungan perkalian dan disimpan pada matriks C
  for(int i=1; i <= baris1; i++){
    for(int j = 1; j <= kolom2; j++){
      for(int k=1; k <= kolom1_baris2; k++) {
        matriksC[i][j] += matriksA[i][k] * matriksB[k][j];
      }
    }
  }

  // cetak matriks C
  for(int i=1; i <= baris1; i++){
    for(int j=1; j <= kolom2; j++){
      cout << matriksC[i][j] << " ";
    }

    cout << endl;
  }
  
}