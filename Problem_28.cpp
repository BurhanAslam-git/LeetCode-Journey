#include <iostream>
#include<cmath>
using namespace std;

bool isHappy(int n){
    if(n <= 0) return false;
    while(n != 1 && n != 4){
        int sum = 0;
        while(n > 0){
            int d = n % 10;
            sum += pow(d,2);
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}

int main(){
    int n;
    cout << "Enter the number : "; cin >> n;
    cout << isHappy(n) << endl;

    return 0;
}
