#include <iostream>
using namespace std;

bool isUnique(int* ptr, int n)
{
    bool hasDuplicate = false;
    for(int i=0; i<n; ++i)
    {
        if(i != n-1)
        {
            int j = i+1;
            while(j < n)
            {
                if(ptr[i] == ptr[j])
                {
                    hasDuplicate = true;
                    return hasDuplicate;
                }
                ++j;
            }
        }

    }
    return hasDuplicate;
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
    bool s = isUnique(ptr,n);
    if(s)
    {
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}