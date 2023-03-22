#include <iostream>
using namespace std;

int main(){
  int baris;
  int kolom;
  int matriks[105][105];

  cin >> baris >> kolom;

  for(int i=1 ; i <= baris; i++) {
    for (int j=1; j <= kolom; j++) {
      cin >> matriks[i][j];
    }
  }

  for(int i=1 ; i <= kolom; i++) {
    for (int j=baris; j >= 1; j--) {
      cout << matriks[j][i] << " ";
    }
    cout << endl;
  }
  
}