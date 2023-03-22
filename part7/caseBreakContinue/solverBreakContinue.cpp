#include <iostream>
using namespace std;

int main() {
  // deklrasi variabel
  int N;
  cin >> N;

  // Lakukan looping sampai dengan N
  // Bila loop saat itu adalah kelipatan 10 (habis dibagi 10) maka continue
  // Bila loop saat itu adalah 42, maka cetak ERROR dan break
  for(int i=1; i<=N; i++){
    
    if(i % 10 == 0){
      continue;
    }
    
    if(i == 42){
      cout << "ERROR" << endl;
      break;
    }
    
    cout << i << endl;
    
  }
}