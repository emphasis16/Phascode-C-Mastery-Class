#include <iostream>
using namespace std;

int main(){
  // deklrasi variabel
  int kandang_bebek;
  int jumlah_bebek = 0;

  // ambil input jumlah kandang bebek
  cin >> kandang_bebek;

  // program melakukan loop sebanyak jumlah kandang bebek untuk mengambil jumlah bebek pada setiap kandang
  // setiap iterasi pada loop akan mengambil jumlah bebek, kemudian dijumlahkan dengan variabel jumlah_bebek
  // cetak jumlah_bebek

  for(int i=0; i < kandang_bebek; i++){
    int bebek;
    cin >> bebek;

    jumlah_bebek += bebek;
  }

  cout << jumlah_bebek << endl;
  
}