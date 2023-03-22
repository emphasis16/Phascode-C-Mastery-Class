#include <iostream>
using namespace std;

// deklrasi variabel
int koorx1,koory1,koorx2,koory2,selisihX,selisihY,jarak;

int main(){
  // input
  cin >> koorx1 >> koory1 >> koorx2 >> koory2;

  // hitung dulu selisihX(x1 - x2), jika selisihX bernilai negatif maka dikalikan dengan -1
  // hitung selisihY(y1 - y2), jika selisihY bernilai negatif maka dikalikan dengan -1
  // jarak = selisihX + selisihY, lalu cetak jarak
  selisihX = koorx1 - koorx2;
  if(selisihX < 0){
    selisihX *= -1;
  }

  selisihY = koory1 - koory2;
  if(selisihY < 0){
    selisihY *= -1;
  }

  jarak = selisihX + selisihY;
  cout << jarak << endl;
}