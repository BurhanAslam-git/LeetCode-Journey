#include<iostream>
using namespace std;

void removeElement(int* arr, int n, int val)
{
    int k = 0;
    for(int i=0; i<n; ++i)
    {
        // cout << "I am modified using a pen" << endl;
        if(arr[i] != val)
        {
            arr[k] = arr[i];
            ++k;
        }
    }

    cout << "K is : " << k << endl;
    cout << "[ ";
    for(int i=0; i<k; ++i)
    {
        if(i == k - 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << "  ";
        }
        
    }
    cout << "] ";

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

    int val;
    cout << "Enter the value : "; cin >> val;
    removeElement(ptr,n,val);

    return 0;
}
