#include<iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            return i; // return as soon as we find the missing number
        }
    }
    return -1; // if nothing missing
}

int main() {
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int n = 8; // numbers should be from 1 to 8
    cout << "Missing number: " << findMissingNumber(arr, n) << endl;
}
