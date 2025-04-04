#include <iostream>
using namespace std;

int heightChecker(int *ptr, int n)
{
    int *newArray = new int[n];
    for (int i = 0; i < n; ++i)
    {
        newArray[i] = ptr[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (newArray[j] > newArray[j + 1])
            {
                int temp = newArray[j];
                newArray[j] = newArray[j + 1];
                newArray[j + 1] = temp;
            }
        }
    }

    int indices = 0;
    for (int i = 0; i < n; ++i)
    {
        if (ptr[i] != newArray[i])
        {
            ++indices;
        }
    }

    delete[] newArray;
    return indices;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Invalid\nEnter again: ";
        cin >> n;
    }

    int *ptr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> ptr[i];
    }
    cout << "Number of Indices is : " << heightChecker(ptr, n) << endl;
    return 0;
}
