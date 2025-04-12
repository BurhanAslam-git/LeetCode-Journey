#include<iostream>
#include<string>
using namespace std;

void reverseWords(string s){
    string newString = "";
    int l = s.length();
    int start, end = l-1;

    while(end >= 0){
        while(end >= 0 && s[end] == ' ') --end;

        start = end;
        while(start >= 0 && s[start] != ' ') --start;

        for(int i=start+1; i <= end; ++i){
            newString += s[i];
        }
        newString += ' ';

        end = start - 1;

        if (end >= 0) {
            // Check if next word exists before appending space
            while (end >= 0 && s[end] == ' ')
                end--;
            if (end >= 0)
                newString += ' ';
        }
    }

    cout << "New String is : " << newString << endl;
}

int main(){
    string s;
    cout << "Enter the string : "; getline(cin, s);
    reverseWords(s);

    return 0;
}