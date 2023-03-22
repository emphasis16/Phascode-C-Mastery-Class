#include <iostream>
using namespace std;

int faktorial(int x){
  // base case adalah x == 1
  // kalo x adalah genap, maka bagi x dengan 2 dan dikali bilanagn di bawahnya
  // kalo x adalah ganjil, maka kali x dengan bilangan di bawahnya
  if(x == 1){
    return 1;
  } else if (x % 2 == 0){
    return x/2 * faktorial(x - 1);
  } else {
    return x * faktorial(x - 1);
  }
}

int main(){
  int a;
  cin >> a;

  int jawaban = faktorial(a);

  cout << jawaban << endl;
}