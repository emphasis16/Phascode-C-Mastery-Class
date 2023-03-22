#include <iostream>
using namespace std;

int main(){
  // inisasi variabel
  int a;

  // input 
  cin >> a;

  // membagi a dengan 2 selama a genap dan a lebih dari 1
  while(a % 2 == 0 && a > 1){
    a = a / 2;
  }

  // apakah a berakhir pada 1
  if(a == 1){
    cout << "ya" << endl;
  } else {
    cout << "bukan" << endl;
  }

  
}