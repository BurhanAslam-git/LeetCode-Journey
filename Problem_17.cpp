#include <iostream>
using namespace std;

int consectiveOnes(int *ptr, int n)
{
    int ones = 1;
    int max = 0;
    for (int i = 0; i < n; ++i)
    {
        if (ptr[i] == 1)
        { // if it is 1 count it.
            ones++;
            if (ones > max)
            { // update max if greater.
                max = ones;
            }
        }

        else
        {
            ones = 0;
        }
    }
    return max;
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

    cout << "Maximum Consective Ones is : " << consectiveOnes(ptr, n) << endl;

    return 0;
}