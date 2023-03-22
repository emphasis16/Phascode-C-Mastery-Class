#include <iostream>
using namespace std;

int main() {
  // deklrasi variabel
  int N;
  cin >> N;

  //deklarasi array
  int arr[1001] = {0};

  // inputkan pada array
  for(int i=0; i<N; i++){
    int masukan;
    cin >> masukan;
    arr[masukan] += 1;
  }

  // cek yang mana yang terbesar dan keluar paling banyak
  int terbesar = 0;
  int hasil = 0;
  for(int i=0; i <= 1000; i++) {
    if(arr[i] >= terbesar) {
      // jumlah kemunculan
      terbesar = arr[i];
      // posisi index
      hasil = i;
    }
  }

  cout << hasil << endl;
}