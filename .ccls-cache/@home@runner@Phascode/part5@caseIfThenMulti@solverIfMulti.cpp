#include <iostream>
using namespace std;

// deklrasi variabel 
int x;

int main(){
  // ambil input user dan masukkan ke x
  cin >> x;

  // cek apakah inputnya positif, jika iya,   cetak kembali input tersebut
  if ((x > 0) && (x % 2 == 0)) {
    cout << x << endl;
  }
}