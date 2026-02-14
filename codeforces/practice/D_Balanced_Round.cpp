#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'

int helper(vector<int>& nums, int k){
    int i=1;
    int maxi = 1;
    int cur = 1;
    while(i<nums.size()){
        if(nums[i]-nums[i-1]>k){
            cur = 1;
        }else{
            cur++;
            maxi = max(maxi,cur);
        }
        i++;
    }
    return nums.size()-maxi;

}

int main() {
    fastio();
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int &num : nums) cin>>num;
        sort(nums.begin(),nums.end());
        cout<<helper(nums,k)<<endl;

    }
    
    return 0;
}