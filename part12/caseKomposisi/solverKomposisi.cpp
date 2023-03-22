#include <iostream>
#include <math.h>
using namespace std;

int fungsi(int A, int B, int K, int x){
  // base case adalah K == 1
  // kalo bukan K == 1 , panggil fungsi ini lagi dengan K yang lebih kecil pada variabel x nya
  if(K == 1){
    return abs(A * x + B);
  } else {
    return abs(A * fungsi(A, B, K - 1, x) + B);
  }
}

int main(){
  int A, B, K, x;
  cin >> A >> B >> K >> x;

  cout << fungsi(A, B, K, x) << endl;
}