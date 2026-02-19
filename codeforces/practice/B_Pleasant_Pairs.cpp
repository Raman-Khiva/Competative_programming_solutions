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
    multiset<ll> st;
    int n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        st.insert(nums[i]);
    }

    ll ans = 0;
    ll i = 1;
    while(i<=n){
        st.erase(st.find(nums[i-1]));
        auto it = st.begin();
        while(it!=st.end()){
            ll prd = *it  * nums[i-1];
            int j = prd - i;
            if(j>n){
                break;
            }
            if(j<=i){
                it++;
                continue;
            }
            if(nums[j-1] == *it){
                ans++;
            }
            it++;
        }
        i++;
    }
    cout<<ans<<endl;
    
    
   

   

}
    
    return 0;
}