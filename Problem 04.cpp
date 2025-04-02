#include <iostream>
#include <string>
using namespace std;

int findPosition(int *arr, int n, int val)
{   
    int left = 0, right = n - 1, mid;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == val)
            return mid;
        else if (arr[mid] < val)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
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

    int val;
    cout << "Enter the value (which has to be find) : ";
    cin >> val;
    int s = findPosition(ptr, n, val);
    cout << s << endl;

    return 0;
}