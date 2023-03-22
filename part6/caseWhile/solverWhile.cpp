#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  // inisiasi variabel masukan
  char masukan[101];

  // input masukan sampai EOF
  while (scanf("%s", masukan) != EOF) {
    cout << masukan << endl;
  }
}