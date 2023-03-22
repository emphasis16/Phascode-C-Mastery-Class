#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  // inisiasi variabel masukan
  int masukan;
  int jumlah = 0;

  // input masukan sampai EOF
  while (scanf("%d", &masukan) != EOF) {
    jumlah += masukan;
  }

  // cetak jumlah
  cout << jumlah << endl;
}