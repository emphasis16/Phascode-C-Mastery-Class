#include <iostream>
using namespace std;

int main(){
  // deklarasi variabel
  int N;
  cin >> N;
  int bilangan = 0;


  // looping
  // cetak bilangan, lalu tambahkan dengan 1, jika bilangan tidak sama dengan 9
  //kalo bilangan sama dengan 9, maka cetak 9 lalu balikkan bilangan ke nilai 0
  for(int i=1; i <= N; i++){
    for(int j=1; j <= i; j++){
      if(bilangan == 9){
        cout << bilangan;
        bilangan = 0;
      } else {
        cout << bilangan;
        bilangan++;
      }
    }

    cout << endl;
  }
}