#include <iostream>
using namespace std;

bool palindrom(string s){
  if(s.length() == 1){
    return true;
  }else if (s.length() == 2){
    if(s[0] == s[1]){
      return true;
    }else{
      return false;
    }
  }else if (s[0] == s[s.length() - 1]){
    s.erase(0, 1);
    s.erase(s.length() - 1, 1);
    return palindrom(s);
  }else{
    return false;
  }
}

int main(){
  string s;
  cin >> s;

  if(palindrom(s)){
    cout << "YA" << endl;
  } else {
    cout << "BUKAN" << endl;
  }
}