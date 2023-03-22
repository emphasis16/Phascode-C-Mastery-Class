#include <iostream>
using namespace std;

int main() {
  // deklrasi
  int N;
  cin >> N;

  for(int i = 0; i <= (N * 2) - 1; i++){
    if (i == N) {
      continue;
    }
    
    if (i < N) {
      for(int j = 1; j < N * 2; j++) {
        if(j <= N + i && j >= N - i){
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }

    if (i > N) {
      for(int k = 1; k < N * 2; k++) {
        if(k <= N + ((N * 2 - 1) - i) && k >= N - ((N * 2 - 1) - i)) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }
    cout << endl;
  }
    
  
  cout << endl;
}
