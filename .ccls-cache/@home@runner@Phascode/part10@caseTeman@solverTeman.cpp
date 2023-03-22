#include <iostream>
#include <math.h>
using namespace std;

int kedekatan(int xj, int xi, int yj, int yi, int D){
  int hasil = pow(abs(xj - xi), D) + pow(abs(yj - yi), D);

  return hasil;
}

int main(){
  // deklrasi variabel jumlah siswa dan pangakat D
  int N, D;
  int data[1001][3];
  int terbesar = 0;
  int terkecil = 0;

  // input N dan D
  cin >> N >> D;

  // input untuk data
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= 2; j++){
      cin >> data[i][j];
    }
  }

  // mengolah data
  for(int i = 1; i < N; i++){
    for(int j = i + 1; j <= N; j++){
      int hasil_kedekatan = kedekatan(data[j][1], data[i][1], data[j][2], data[i][2], D);

      // asign kecil besar
      if(terbesar == 0 && terkecil == 0){
        terkecil = hasil_kedekatan;
        terbesar = hasil_kedekatan;
      } else if(hasil_kedekatan > terbesar){
        terbesar = hasil_kedekatan;
      } else if(hasil_kedekatan < terkecil){
        terkecil = hasil_kedekatan;
      }
    }
  }

  // cetak terkecil dan terbesar
  cout << terkecil << " " << terbesar << endl;
}