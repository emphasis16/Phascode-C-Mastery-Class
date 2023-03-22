#include <iostream>
#include <math.h>
using namespace std;

// deklarasi variabel
double x;
int fl, cl;


int main(){
  // ambil input var x
  cin >> x;

  // cek apakah bilangan tersebut sudah bulat, jika iya maka set floor dan ceiling sama dengan bilangan tsb
  // jika dia bilangan positif, gunakan trunc(x) untuk floor, dan untuk ceiling sama dengan floor + 1
  // jika dia bilangan negatif, gunakan trunc(x) untuk ceil, dan untuk floor sama dengan ceil - 1
  if(x == trunc(x)){
    cl = x;
    fl = x;
  } else if(x > 0){
    fl = trunc(x);
    cl = fl + 1;
  } else if(x < 0){
    cl = trunc(x);
    fl = cl - 1;
  }

  // cetak fl dan cl
  cout << fl << " " << cl << endl;
}