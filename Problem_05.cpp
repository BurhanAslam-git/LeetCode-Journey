#include <iostream>
#include <string>
using namespace std;

// First Approach.
void plusOne(int *ptr, int n)
{

    string num = "";
    for (int i = 0; i < n; ++i)
    {
        num += to_string(ptr[i]);
    }
    int newNum = stoi(num);
    cout << "New Number is : " << newNum << endl;
    newNum += 1;

    num = to_string(newNum);
    n = num.size();
    ptr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        ptr[i] = num[i] - '0'; // Convert char to integer
    }
    cout << endl;
    cout << "Updated Integer Array is : " << endl;
    cout << "[ ";
    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1)
        {
            cout << ptr[i];
        }
        else
        {
            cout << ptr[i] << "  ";
        }
    }
    cout << "]";
    cout << endl;
}

// Second Approch;
// vector<int> plusOne(vector<int>& ptr) {
//     int n = ptr.size();
//     for(int i=n-1; i>=0; --i)
//     {
//         if(ptr[i] < 9)
//         {
//             ptr[i]++;
//             return ptr;
//         }
//         ptr[i] = 0;
//     }
//      ptr.insert(ptr.begin(), 1);
//      return ptr;
// }

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

    plusOne(ptr, n);

    return 0;
}