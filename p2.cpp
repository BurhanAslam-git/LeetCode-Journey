#include <iostream>
using namespace std;

int removeDuplicates(int* arr, int n)
{
    int k = 0;
    for(int i=0; i<n; ++i)
    {
        if(!(i< n-1) || arr[i] != arr[i+1])
        {
            arr[k] = arr[i];
            ++k;
        }
    }
    cout << "\n\n";
    cout << "K(Number of Unique Elements) is : " << k << endl;
    cout << "Unique Elements   ";
    cout << "[ ";
    for(int i=0; i<k; ++i)
    {
        if(i == k -1)
        {
            cout << arr[i];
        }
        else{
            cout << arr[i] << "  ";
        }
        
    }
    cout << " ]" << endl;
    return k;
}


int main()
{
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
    removeDuplicates(ptr,n);
    return 0;
}