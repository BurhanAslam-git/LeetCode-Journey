#include<iostream>
#include<string>
using namespace std;

int findLastWordLength(string s){
    int count = 0;
    int n = s.size();
    int i = n-1;
    while(s[i] == ' ') --i;
    while(i >= 0 && s[i] != ' '){
        count++;
        --i;
    }
    return count;

}

int main(){
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    cout << "Lenght of last word is : " << findLastWordLength(s) << endl;
    return 0;
}