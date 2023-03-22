#include <iostream>
using namespace std;

int main() {
  // inisiasi variabel
  int a;

  // input
  cin >> a;

  // loop dari N hingga 1, kalo i habis membagi N maka i adalah faktor dan cetak ke layar
  for(int i = a; i >= 1; i--){
    // cek apakah habis dibagi dengan i, jika iya cetak i
    if (a % i == 0){
      cout << i << endl;
    }
  }
}