#include<iostream>
using namespace std;

void moveZeros(int* ptr, int n)
{
    int pos = 0;
    for(int i=0; i<n; ++i){
        if(ptr[i] != 0){
            ptr[pos++] = ptr[i];
        }
    }
    while(pos < n){
        ptr[pos++] = 0;
    }

    cout << "Update Array is : " << endl;
    for(int i=0; i<n; ++i){
        cout << ptr[i] << "  ";
    }
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

    moveZeros(ptr,n);

    return 0;
}