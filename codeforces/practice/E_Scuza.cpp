#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    
int t;
cin>>t;
while(t--){

    int n,k;
    cin>>n>>k;

    vector<int> nums(n);
    for(int &num : nums) cin>>num;
    vector<long long> prefix;

    prefix.push_back(0);
    prefix.push_back(nums[0]);

    for(int i=1;i<n;i++){
        prefix.push_back(prefix.back()+nums[i]);
        nums[i] = max(nums[i],nums[i-1]);
    }

    while(k--){
        int x;
        cin>>x;
        int si = 0;
        int ei = n-1;
        int ans = -1;
        while(si<=ei){
            
            int mid = si + (ei-si)/2;
            if(nums[mid]<=x){
                ans = mid;
                si = mid +1;
            }
            else{
                ei = mid - 1;
            }
        }
        cout<<prefix[ans+1]<<" ";
    }
    cout<<endl;
}
    
    return 0;
}