#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t){
    int j = 0;
    for(int i=0; i<t.length(); ++i){
        if(t[i] == s[j]) ++j;
    }
    if(j == s.length()) return true;
    else return false;
}

int main(){
    string t, s;
    cout << "Enter the string # 01 (String t): ";
    cin >> t;
    cout << "Enter the string # 02 (String s): ";
    cin >> s;

    if(isSubsequence(s,t)) cout << "True !" << endl;
    else cout << "False !" << endl;

    return 0;
}