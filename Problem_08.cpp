#include<iostream>
using namespace std;

int singleNumber(int* ptr, int n)
{
    int result = 0;
    for(int i=0; i<n; ++i)
    {
        result ^= ptr[i];
    }
    return result;

    
}


int main(){
    int n;
    cout << "Enter the size : ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Invalid \n Enter again ";
        cin >> n;
    }
    int *ptr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> *(ptr + i);
    }

    cout << "The Single Number is : " << singleNumber(ptr,n);

    return 0;
}