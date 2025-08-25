#include<iostream>
#include<vector>
using namespace std;

vector<int> UnionArray(vector<int>& nums1, vector<int>& nums2) {
    int i = 0, j = 0;
    vector<int> result;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
        }
        else if (nums1[i] > nums2[j]) {
            if (result.empty() || result.back() != nums2[j]) {
                result.push_back(nums2[j]);
            }
            j++;
        }
        else { // nums1[i] == nums2[j]
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements of nums1
    while (i < nums1.size()) {
        if (result.empty() || result.back() != nums1[i]) {
            result.push_back(nums1[i]);
        }
        i++;
    }

    // Add remaining elements of nums2
    while (j < nums2.size()) {
        if (result.empty() || result.back() != nums2[j]) {
            result.push_back(nums2[j]);
        }
        j++;
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {4, 5, 6, 7, 8};
    vector<int> result = UnionArray(a, b);

    cout << "Union of arrays: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
}
