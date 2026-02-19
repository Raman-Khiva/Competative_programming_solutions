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
    vector<ll> nums(n);
    for(ll &num : nums) cin>>num;

    unordered_map<ll,ll> mp;
    ll ans = 0;
    for(int i=0;i<n;i++){
        int diff = nums[i]-(i+1);
        if(mp.find(diff)!=mp.end()){
            mp[diff]++;
        }else{
            mp[diff]=1;
        }
    }
    for(auto it : mp){
        if(it.second<=1) continue;
        ans+=(it.second*(it.second-1))/2;
    }

    cout<<ans<<endl;
    

}
    
    return 0;
}