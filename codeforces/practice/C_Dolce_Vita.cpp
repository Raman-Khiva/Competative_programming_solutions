#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'

ll helper(ll prv,vector<ll> &nums,ll i,ll x){
    ll si = 0;
    ll ei = 1e9+1;
    ll ans = -1;
    while(si<=ei){
        ll mid = si + (ei-si)/2;
        ll cur = nums[i] + (i+1)*(mid);
        if(cur<=x){
            ans = mid;
            si = mid+1;
        }
        else{
            ei = mid-1;
        }
    }
    return ans;
}



int main() {
    fastio();
    
int t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll> nums(n);
    for(ll & num : nums) cin>>num;
    sort(nums.begin(),nums.end());

    for(int i=1;i<n;i++){
       nums[i] += nums[i-1];
    }

    ll prv = 0;
    ll ans = 0;
    ll i=n-1;

    while(i>=0){
        ll maxi = helper(prv,nums,i,x);
        if(maxi >= prv){
            ans += (maxi-prv+1)*(i+1);
            prv = maxi+1;
        }
        
        i--;
    }
    
    cout<<ans<<endl;
    

}
    
    return 0;
}