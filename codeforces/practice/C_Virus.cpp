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
    ll n,m;
    cin>>n>>m;

    vector<ll> nums(m);
    for(ll &num : nums) cin>>num;
    sort(nums.begin(),nums.end());
    vector<ll> diff;

    for(int i=0;i<m-1;i++){
        diff.push_back(nums[i+1]-nums[i]-1);
    }
    diff.push_back(nums[0]+n-nums[m-1]-1);

    sort(diff.begin(),diff.end(),greater<ll>());

    ll ans = 0;
    ll prv = 0;
    for(ll &dif : diff){
        if(dif<=prv) break;
        dif -= prv;
        if(dif==1){
            ans += 1;
            break;
        }
        ans += dif-1;
        prv+=4;
    }

    cout<<n-ans<<endl;
    
}
    
    return 0;
}