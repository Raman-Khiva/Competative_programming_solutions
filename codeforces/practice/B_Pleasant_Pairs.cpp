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
    multiset<int> st;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int &x : nums){
        cin>>x;
        st.insert(x);
    }
    
    ll ans = 0;
    for(int i=1;i<n;i++){
        st.erase(st.find(nums[i-1]));
        int l = 2*i+1;
        int h = n+i;

        
    }

    cout<<ans<<endl;

}
    
    return 0;
}