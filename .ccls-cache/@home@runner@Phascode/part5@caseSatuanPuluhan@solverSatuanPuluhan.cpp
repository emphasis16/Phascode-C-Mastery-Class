#include <iostream>
using namespace std;

// deklarasi variabel
int x;

int main(){
  // ambil input x
  cin >> x;

  // cek apakah satuan, puluhan, ratusan, atau ribuan, atau puluh ribuan
  // satuan bilangan kurang dari 10
  // puluhan bilang dari 10 sampai kurang dari 100
  // ratusan dari 100 sampai kurang dari 1000
  // ribuan dari 1000 sampai kurang dari 10.000
  // puluh ribuan dari 10.000 sampai kurang dari 100.000
  if (x < 10){
    cout << "satuan" << endl;
  } else if (x < 100){
    cout << "puluhan" << endl;
  } else if (x < 1000){
    cout << "ratusan" << endl;
  } else if (x < 10000){
    cout << "ribuan" << endl;
  } else {
    cout << "puluhribuan" << endl;
  }
}