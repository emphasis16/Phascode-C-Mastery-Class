#include <iostream>
using namespace std;

int main() {
  int loop, kelipatan;
  cin >> loop >> kelipatan;

  // lakukan loop, dan setiap kelipatan, cetak *
  for(int i=1; i<=loop; i++) {
    if (i % kelipatan == 0) {
      cout << "* ";
    } else {
      cout << i << " ";
    }
  }

  cout << endl;
}