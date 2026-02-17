#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'

int main() {
    fastio();
    
// int t;
// cin>>t;
// while(t--){
// } 

    int n,q;
    cin>>n>>q;
    vector<pair<ll,int>> nums(n,{0,q+1});
    for(auto &num : nums) cin>>num.first;
    ll sum = 0;
    for(auto &num : nums) sum += num.first;
    
    pair<ll,int> last = {0,q+2};

    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int i;
            ll x;
            cin>>i>>x;
            if(nums[i-1].second<last.second){
                sum -= nums[i-1].first;
                nums[i-1] = {x,q};
            }else{
                sum -= last.first;
                nums[i-1] = {x,q};
            }
            sum += x;
        }
        else{
            int x;
            cin>>x;
            last = {x,q};
            sum = (ll)n*x;
            
        }
    cout<<sum<<endl;
    }
    
    return 0;
}