#include <iostream>
#include <math.h>

using namespace std;

bool palindrome(string s){
    if(s[0] != s[s.length() - 1]) return false;
    if(s.length() > 2) return palindrome(s.substr(1, s.length() - 2));
    if (s.length() == 1) return true;
}

int main() {
    string s;
    
    cin >> s;
    
    if(palindrome(s)) {
      cout << "YA" << endl;  
    } else {
       cout << "BUKAN" << endl;
    }
}