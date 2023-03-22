#include <iostream>
#include <math.h>
using namespace std;

int fungsi(int A, int B, int x){
  int perhitungan = (A * x) + B;
  int perhitungan_mutlak = abs(perhitungan);

  return perhitungan_mutlak;
}

int main(){
  int A, B, K, x;
  cin >> A >> B >> K >> x;

  // lakukan sekali dulu
  int hasil = fungsi(A, B, x);

  // masuk ke perulangan berikutnya
  for(int i = 2; i <= K; i++){
    hasil = fungsi(A, B, hasil);
  }

  // cetak
  cout << hasil << endl;
}