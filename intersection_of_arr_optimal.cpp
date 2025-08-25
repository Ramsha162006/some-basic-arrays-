#include<iostream>
#include<vector>
using namespace std;

vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2){
    vector<int>result;
    int i = 0;
    int  j = 0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]>nums2[j]){
            j++;
        }
        else if(nums1[i]<nums2[j]){
            i++;
        }
        else{
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return result;

}
int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {4, 5, 6, 7, 8};
    vector<int> result = intersectionArray(a, b);

    cout << "intersection of arrays: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
}





