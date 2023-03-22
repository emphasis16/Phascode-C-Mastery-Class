#include <iostream>
using namespace std;

// deklarasi variabel
int x;

int main(){
  // ambil input untuk var x
  cin >> x;

  // cek apakah var x itu positif, jika iya cetak "positf"
  // jika tidak cek apakah var x itu 0, jika iya cek "nol"
  // jika bukan 0, maka bisa dipastikan kalau var x adalah negatif, cetak "negatif"
  if (x > 0){
    cout << "positif" << endl;
  } else if (x == 0) {
    cout << "nol" << endl;
  } else {
    cout << "negatif" << endl;
  }
}