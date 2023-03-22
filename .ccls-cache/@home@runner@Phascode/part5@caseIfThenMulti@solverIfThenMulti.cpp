#include <iostream>
using namespace std;

// deklrasi variabel
int x;

int main(){
  // ambil input untuk variabel x
  cin >> x;

  // cek apakah variabel x lebih dari 0 dan habis dibagi 2, jika iya cetak variabel x
  if (x > 0){
    if (x % 2 == 0){
      cout << x << endl;
    }
  }
}