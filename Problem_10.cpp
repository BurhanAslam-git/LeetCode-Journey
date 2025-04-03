#include <iostream>
using namespace std;

int findMissing(int *ptr, int n)
{
    int num = -1;
    int i = 0;
    bool isfound = false;
    while (i <= n)
    {
        isfound = false;
        for (int j = 0; j < n; ++j)
        {
            if (i == ptr[j])
            {
                isfound = true;
            }
            else
                num = i;
        }

        if (!isfound)
            return i;
        ++i;
    }

    return num;
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

    cout << "Missing Number is : " << findMissing(ptr, n) << endl;
    return 0;
}