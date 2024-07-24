#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    int k = 3;
    map<int, int> temp;
    int sum = 0;
    int max_len = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];

        // If current sum equals k, update max_len
        if (sum == k) {
            max_len = i + 1;
        }

        // Check if there exists a previous cumulative sum that makes the current sum - k equal to k
        if (temp.find(sum - k) != temp.end()) {
            max_len = max(max_len, i - temp[sum - k]);
        }

        // Store the first occurrence of each cumulative sum
        if (temp.find(sum) == temp.end()) {
            temp[sum] = i;
        }
    }

    cout << "Maximum subarray length with sum equal to " << k << ": " << max_len << endl;

    // Output the hash map (temp)
    cout << "Hash map (cumulative sums):" << endl;
    for (auto it : temp) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
