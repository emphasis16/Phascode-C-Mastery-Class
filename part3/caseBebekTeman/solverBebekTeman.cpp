#include <iostream>
using namespace std;

int bebek, teman, bagi, sisa;

int main(){
  // ambil input bebek dan teman
  cin >> bebek >> teman;

  // menghitung bebek yang dibagi
  bagi = bebek / teman;

  // menghitung sisa bebek
  sisa = bebek % teman;

  // cetak outputnya
  cout << "masing-masing " << bagi << endl;
  cout << "bersisa " << sisa << endl;
}