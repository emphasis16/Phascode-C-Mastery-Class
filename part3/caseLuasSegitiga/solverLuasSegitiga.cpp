#include <iostream>
using namespace std;

double a, t, luas;

int main(){
  // mengambil input alas dan tinggi
  cin >> a >> t;

  // menghitung luas
  luas = (a * t) / 2;

  // cetak hasil dengan 2 angka di belakang koma
  printf("%.2lf\n", luas);
}