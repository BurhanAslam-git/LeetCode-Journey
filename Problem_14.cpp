#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    while (stones.size() > 1) {
        sort(stones.begin(), stones.end());  // Sort in ascending order

        int y = stones.back();  // Largest
        stones.pop_back();

        int x = stones.back();  // Second largest
        stones.pop_back();

        if (x != y) {
            stones.push_back(y - x); // Add back the difference
        }
    }

    return stones.empty() ? 0 : stones[0]; // Return remaining stone or 0
}

int main() {
    int n;
    cout << "Enter number of stones: ";
    cin >> n;

    while(n <= 0) {
        cout << "Invalid number. Enter again: ";
        cin >> n;
    }

    vector<int> stones(n);
    for(int i = 0; i < n; ++i) {
        cout << "Enter weight of stone " << i + 1 << ": ";
        cin >> stones[i];
    }

    int result = lastStoneWeight(stones);
    cout << "Last Stone Weight is: " << result << endl;

    return 0;
}
