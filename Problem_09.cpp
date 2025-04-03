#include <iostream>
using namespace std;

void buyAndSell(int *ptr, int n)
{
    int buyDay = 0;
    int sellDay = -1;
    int MaxProfit = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ptr[j] - ptr[i] > MaxProfit)
            {
                buyDay = i;
                sellDay = j;
                MaxProfit = ptr[j] - ptr[i];
            }
        }
    }
    if (MaxProfit != 0)
    {
        cout << "Buy on : " << buyDay + 1 << endl;
        cout << "Sell on : " << sellDay + 1 << endl;
        cout << "MaxProfit is : " << MaxProfit << endl;
    }
    else
    {
        cout << "No Selling Day Found !" << endl;
        cout << "MaxProfit is : " << MaxProfit << endl;
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

    buyAndSell(ptr, n);

    return 0;
}