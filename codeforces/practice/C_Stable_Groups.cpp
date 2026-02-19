#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> nums(n);
    for(ll &num : nums) cin>>num;

    sort(nums.begin(),nums.end());

    vector<vector<ll>> groups;
    groups.push_back({nums[0],nums[0]});
    for(int i=1;i<n;i++){
        if((nums[i]-groups.back()[1])>x){
            groups.push_back({nums[i],nums[i]});
        }
        else{
            groups.back()[1] = nums[i];
        }
    }
    vector<ll> diffs;
    for(int i=1;i<groups.size();i++){
        diffs.push_back(groups[i][0] - groups[i-1][1]);
    }
    sort(diffs.begin(),diffs.end());
    ll ans = groups.size();
    ll i=0;
    while((k>=1) && i<diffs.size()){
        ll need = (diffs[i]-1)/x;
        if(need<=k){
            k-=need;
            ans--;
            i++;
        }
        else{
            break;
        }
    }

    cout<<ans<<endl;


    
    return 0;
}