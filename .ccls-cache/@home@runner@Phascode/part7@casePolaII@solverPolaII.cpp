#include <iostream>
using namespace std;

int main(){
  // deklrasai variabel
  int N;
  cin >> N;

  //lakukan loop baris, dalam loop baris lakukan loop kolom
  // baris loop i, kolom loop j
  // j mulai dari N sampai dengan 1, apabila j lebih besar dari i cetak spasi, kalo engga cetak *

  for(int i=1; i <= N; i++){
    for(int j=N; j>=1; j--){
      if(j > i) {
        cout << " ";
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }
}