#include <iostream>
#include<string>
using namespace std;

int findPosition(int* nums, int n, int val)
{

        for(int i = 0;i<n;i++)
        {
        if(nums[i]==val){
        return i;
        }
        else if(val<nums[0]){
        return 0;
        }
        else if(val<nums[i]&&val>nums[i-1]){
        return i;
        }
        else if(val>nums[n-1]){
        return n;
        }
        
        
    // int left = 0, right = n-1, mid;

    // while(left <= right)
    // {
    //     int mid = left + (right - left) / 2;
    //     if(arr[mid] == val) return mid;
    //     else if(arr[mid] < val) left = mid + 1;
    //     else right = mid - 1;
    // }
    // return left;

    // int k = -1;
    // bool found = false;
    // for (int i = 0; i < n; ++i)
    // {
    //     if (arr[i] == val)
    //     {
    //         k = i;
    //         found = true;
    //         break;
    //     }
    // }

    // if (!found)
    // {
    //     for (int i = 0; i < n; ++i)
    //     {
    //         if(i > 0 && (i != n-1) && arr[i+1] > val && arr[i-1] < val)
    //         {
    //             k = i;
    //         }
    //     }
    //     if(k == -1)
    //     {
    //         k = n;
    //     }
    // }
    // return k;
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