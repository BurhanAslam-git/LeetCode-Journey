#include<iostream>
#include<climits>
using namespace std;

int findThirdMax(int* ptr, int n) {
    long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

    for(int i = 0; i < n; ++i) {
        int num = ptr[i];
        if(num == first || num == second || num == third)
            continue;

        if(num > first) {
            third = second;
            second = first;
            first = num;
        }
        else if(num > second) {
            third = second;
            second = num;
        }
        else if(num > third) {
            third = num;
        }
    }

    // Use LONG_MIN to check if third was updated
    if(third == LONG_MIN) {
        cout << "Third Maximum does not exist!" << endl;
        cout << "Maximum Number is: " << first << endl;
        return first;
    }

    cout << "Third Maximum is: " << third << endl;
    return third;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    while(n <= 0) {
        cout << "Invalid\nEnter again: ";
        cin >> n;
    }

    int* ptr = new int[n];
    for(int i = 0; i < n; ++i) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> ptr[i];
    }

    findThirdMax(ptr, n);
    delete[] ptr;
    return 0;
}
