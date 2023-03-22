#include <iostream>
using namespace std;

bool cekPrima(int x){
  bool kebenaran = 1;
  
  if(x == 1){
    kebenaran = 0;
  } else if(x == 2){
    kebenaran = 1;
  } else if (x > 2 && x % 2 == 0){
    kebenaran = 0;
  } else {
    int i = 2;
    while((i*i) <= x) {
      if((x % i)==0) {
        kebenaran = 0;
        break;
      }
      i++;
    }
  }

  return kebenaran;
}

int main(){
  // deklrasi variabel
  int N;
  int faktorke = 1;
  cin >> N;

  // cek dari 2 sampai N, mana yang prima
  for(int i=2; i <= N; i++){
    // deklrasi pangkat
    int pangkat = 0;
    
    // cek apakah prima
    if(cekPrima(i)){
      // bagi selama masih bisa
      while(N % i == 0){
        pangkat++;
        N = N / i;
      }
      
      // kalo pangkat 0 skip
      if(pangkat == 0){
        continue;
      }

      // cetak faktor
      if(faktorke == 1){
        if(pangkat == 1){
            cout << i << " ";
          } else {
            cout << i << "^" << pangkat << " ";
        }
      } else {
          if(pangkat == 1){
            cout << "x " << i << " ";
          } else {
            cout << "x " << i << "^" << pangkat << " ";
        }
      }
      faktorke++;
    }
  }

  cout << endl;
}