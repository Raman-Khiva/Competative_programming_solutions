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
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int &num : nums) cin>>num;
    
    
    int ans = 0;
    for(int i=0;i<n-1;i++){
        if(nums[i+1] == 7-nums[i] || nums[i+1]==nums[i]){
            ans++;
            i++;
        }
    }
    cout<<ans<<endl;
    
    
}
    
    return 0;
}