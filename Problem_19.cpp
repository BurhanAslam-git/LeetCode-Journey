#include<iostream>
#include<string>
using namespace std;

string LongestCommonPrefix(string* ptr, int n){
    if(n == 0) return "";
    string result = ptr[0];
    for(int i=1; i<n; ++i){
        int j = 0;
        while(j < result.length() && j < ptr[i].length() && result[j] == ptr[i][j]){
            ++j;
        }
        result = result.substr(0,j);
        if(result.empty()) return "";
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;  // Take number of strings input from the user

    // Dynamically allocate memory for the array of strings
    string* ptr = new string[n];

    // Input the strings from the user
    cout << "Enter " << n << " strings:" << endl;
    for(int i = 0; i < n; ++i){
        cin >> ptr[i];
    }

    // Call the function to find the longest common prefix
    string r = LongestCommonPrefix(ptr, n);
    cout << "Longest Common Prefix is : " << r << endl;

    // Free dynamically allocated memory
    delete[] ptr;

    return 0;
}
