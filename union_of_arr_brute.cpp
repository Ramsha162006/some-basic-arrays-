#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int>UnionArray(vector<int>&nums1,vector<int>&nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    set<int>st;
    for(int i = 0;i<n1;i++){
        st.insert(nums1[i]);
    }
    for(int i = 0;i<n2;i++){
        st.insert(nums2[i]);
    }
    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {4,5,6,7,8};
    vector<int>result = UnionArray(a,b);
    cout<<"Union of arrays :";
    for(int val:result){
        cout<<val<<" ";
    }
}