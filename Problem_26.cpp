#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s){
    string newString = "";
    for(int i=0; i<s.length(); ++i){
        if(s[i] == ' ' || s[i] == ':' || s[i] == ',' || s[i] == '.') continue;
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            newString += tolower(s[i]);
        }
        else newString += s[i];
    }
    cout << "String is : " << newString << endl;
    bool isPalindrome = true;
    int start = 0;
    int end = newString.length()-1;
    while(start <= end){
        if(newString[start] != newString[end]){
            isPalindrome = false;
            break;
        }
        ++start;
        --end;
    }
    return isPalindrome;
}

int main(){
    string s;
    cout << "Enter the string : "; getline(cin, s);
    cout << isPalindrome(s);
    return 0;
}