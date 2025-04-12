#include <iostream>
#include<vector>
#include<string>
using namespace std;

void printSummaryRanges(int* ptr, int n){
    vector<string>s;
    int a,b;
    a = ptr[0];
    for(int i=0; i<n; ++i){
      //  if(a != ptr[0]) a = ptr[i];
        if(ptr[i] + 1 != ptr[i+1] && i < n){
            b = ptr[i];
        }
        else continue;
        if(a != b) {
            string arrowStr = to_string(a) + "->" + to_string(b);
            s.push_back(arrowStr);
        }
        else{
            string arrowStr1 = to_string(a);
            s.push_back(arrowStr1);
        }
        a = ptr[i+1];
    }

    // Print result
    cout << "\n------------------ Resultant Vector is ---------------\n";
    cout << "[";
    for (const string& str : s) {
        if(str == s.back()){
            cout << str;
        }
        else{
            cout << str  << " ";
        }
        
    }
    cout << "]" << "\n\n";
}


int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;

    while (n <= 0) {
        cout << "Invalid\nEnter again: ";
        cin >> n;
    }

    int* ptr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> ptr[i];
    }

    printSummaryRanges(ptr,n);


    return 0;
}