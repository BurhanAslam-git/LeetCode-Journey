#include <iostream>
using namespace std;

void bubbleSort(int* ptr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (ptr[j] > ptr[j + 1]) {
                // Swap elements if they're in the wrong order
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}

int majorityElement(int* ptr, int n) {
    bubbleSort(ptr, n);  // Sort the array first

    int count = 1;
    int times = n / 2;
    int majorElement = ptr[0];

    // Loop through the sorted array to find the majority element
    for (int i = 1; i < n; ++i) {
        if (ptr[i] == ptr[i - 1]) {
            ++count;
        } else {
            count = 1;
        }

        if (count > times) {
            majorElement = ptr[i];
            break;
        }
    }
    return majorElement;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    while (n <= 0) {
        cout << "Invalid\nEnter again: ";
        cin >> n;
    }

    int* ptr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> ptr[i];
    }

    cout << "Majority Element is : " << majorityElement(ptr, n) << endl;
    delete[] ptr;  
    return 0;
}
