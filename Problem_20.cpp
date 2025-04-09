#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string s){
    stack<char> stk;
    int n = s.size();
    for(int i=0; i<n; ++i){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            stk.push(s[i]);
        }
        else{
            if(!stk.empty()){
                if(s[i] == ')' && stk.top() == '(') stk.pop();
                else if(s[i] == '}' && stk.top() == '{') stk.pop();
                else if(s[i] == ']' && stk.top() == '[') stk.pop();
                else return false;
            }
            else return false;
        }
    }
    if(!stk.empty()){
        return false;
    }
    return true;
}

int main(){
    string s;
    cout << "Enter the Expression : "; cin >> s;
    if(validParenthesis(s)){cout << "True !";}
    else {cout << "False !";}
    return 0;
}