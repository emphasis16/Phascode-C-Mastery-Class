#include <iostream>
using namespace std;

string konversi(int x){
  // base case adalah 1, return "1"
  if(x == 1){
    return "1";
  }else if(x % 2 == 0){
    return konversi(x / 2) + "0";
  }else{
    return konversi(x / 2) + "1";
  }
}

int main(){
  int a;
  cin >> a;

  cout << konversi(a) << endl;
}