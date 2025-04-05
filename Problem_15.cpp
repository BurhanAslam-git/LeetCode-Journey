#include <iostream>
using namespace std;

void transposeMatrix(int **ptr, int m, int n)
{
    int **newptr = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        newptr[i] = new int[m];
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            newptr[j][i] = ptr[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << newptr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int **ptr = nullptr;
    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of cols : ";
    cin >> n;
    ptr = new int *[m];
    for (int i = 0; i < m; ++i)
    {
        ptr[i] = new int[n];
    }

    // inputting values from the user.

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << "Enter Element at Row " << i + 1 << " & Column " << j + 1 << " : ";
            cin >> ptr[i][j];
        }
    }

    // displaying the matrix

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    transposeMatrix(ptr, m, n);

    return 0;
}