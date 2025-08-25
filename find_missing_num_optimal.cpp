#include<iostream>
using namespace std;
int findMissingNumber(int arr[],int n){
    int total = n*(n+1)/2;
    int sum = 0;
    for(int i = 0;i<n-1;i++){
        sum+=arr[i];
    }
    return total-sum;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;  // numbers should be from 1 to 5
    cout << "Missing number is: " << findMissingNumber(arr, n) << endl;
}
