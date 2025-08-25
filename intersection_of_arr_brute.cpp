#include<iostream>
#include<vector>
using namespace std;

vector<int> UnionArray(vector<int>& nums1, vector<int>& nums2){
    vector<int>result;
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<bool>visited(n2,false);

    for(int i = 0 ;i<n1;i++){
        for(int j = 0;j<n2;j++){
            if(nums1[i]==nums2[j]&&!visited[j]){
                result.push_back(nums1[i]);
                visited[j] = true;
                break;
            }
        }
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
