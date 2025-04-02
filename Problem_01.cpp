#include <iostream>
using namespace std;

void twoSum(int *ptr, int n, int target)
{
    bool found = false;
    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1 && !found)
        {
            cout << "No Sum Found !";
            return;
        }

        int j = i + 1;
        while (j < n)
        {
            if (ptr[i] + ptr[j] == target)
            {
                cout << "Sum Found !" << endl;
                cout << i << "  " << j << endl;
                cout << "As " << "ptr[" << i << "] + " << "ptr[" << j << "]" << " = " << target << endl;
                found = true;
                break;
            }
            ++j;
        }
        if (found)
            return;
    }
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

    int target;
    cout << "Enter the target Sum : ";
    cin >> target;

    twoSum(ptr, n, target);

    return 0;
}