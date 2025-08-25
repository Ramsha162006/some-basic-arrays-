#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(int arr[], int n) {
    vector<int> hash(n+1, 0); // initialize hash with zeros

    // mark the numbers present in arr
    for (int i = 0; i < n-1; i++) {
        hash[arr[i]] = 1;
    }

    // find the missing number
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    return -1; // in case nothing is missing
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;  // numbers should be from 1 to 5
    cout << "Missing number is: " << findMissingNumber(arr, n) << endl;
}
