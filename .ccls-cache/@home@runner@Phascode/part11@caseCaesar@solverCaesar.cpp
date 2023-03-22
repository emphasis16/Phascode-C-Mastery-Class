#include <iostream>
using namespace std;

int main(){
  string s;
  int encrypt;
  cin >> s >> encrypt;

  for(int i = 0; i < s.length(); i++){
    s[i] = (s[i] - 'a' + encrypt) % 26 + 'a';
  }

  cout << s << endl;
}