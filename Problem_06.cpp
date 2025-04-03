#include <iostream>
using namespace std;

void mergeArrays(int *ptr1, int *ptr2, int m, int n)
{
    // Merging ptr2 into ptr1
    for (int i = 0; i < n; ++i)
    {
        ptr1[m + i] = ptr2[i]; 
    }
    for (int i = 0; i < m + n - 1; ++i)
    {
        for (int j = 0; j < m + n - i - 1; ++j)
        {
            if (ptr1[j] > ptr1[j + 1])
            {
                // Swap the elements
                int temp = ptr1[j];
                ptr1[j] = ptr1[j + 1];
                ptr1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < m + n; ++i)
    {
        cout << ptr1[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int m, n;
    cout << "Enter the size of first array: ";
    cin >> m;
    while (m <= 0)
    {
        cout << "Invalid size! Enter again: ";
        cin >> m;
    }

    cout << "Enter the size of second array: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "Invalid size! Enter again: ";
        cin >> n;
    }
    int *ptr1 = new int[m + n];
    int *ptr2 = new int[n];

    for (int i = 0; i < m; ++i)
    {
        cout << "Enter element " << i + 1 << " of first array: ";
        cin >> *(ptr1 + i);
    }

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter element " << i + 1 << " of second array: ";
        cin >> *(ptr2 + i);
    }

    mergeArrays(ptr1, ptr2, m, n);

    delete[] ptr2;
    delete[] ptr1;

    return 0;
}
