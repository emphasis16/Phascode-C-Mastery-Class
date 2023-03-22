#include <iostream>
using namespace std;

int main(){
  // inisiasi variabel loop
  int loop;
  int bilangan;
  int terbesar, terkecil;
  cin >> loop;

  // inisiasi variabel terbesar terkecil
  

  // input untuk loop mau ambil bilangan bilangannya
  // saat pertama kali loop jalan, terbesar dan terkecil adalah bilangan yang pertama kali dimasukkan
  // jika angka berikutnya lebih dari terbesar, maka terbesar angka = tersebut, jika angka lebih kecil dari terkecil maka terkecil =  angka tersebut
  for(int i = 0; i < loop; i++) {
    cin >> bilangan;

    // ketika iterasi pertama, assign terbesar dan terkecil
    if (i == 0){
      terbesar = bilangan;
      terkecil = bilangan;
    }

    // bandingkan angka dengan terbesar dan terkecil
    if(bilangan >= terbesar){
      terbesar = bilangan;
    }

    if(bilangan <= terkecil){
      terkecil = bilangan;
    }
  }

  // cetak terbesar dan terkecil
  cout << terbesar << " " << terkecil << endl;
}