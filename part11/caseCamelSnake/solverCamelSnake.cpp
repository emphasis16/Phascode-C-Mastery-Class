#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;

  // cek apakah dia snake case
  if(s.find("_") != -1){
    // cek indeks mana yang ada _ nya, kemudian _ itu hapus dan ganti menjadi upper case
    for(int i=0; i < s.length(); i++){
      if(s[i] == '_'){
        s.erase(i, 1);
        s[i] -= 32;
      }
    }
  } else {
      for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
          s[i] += 32;
          s.insert(i, "_");
        }
      }
  }

  cout << s << endl;
}