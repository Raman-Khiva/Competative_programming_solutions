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

    bool ans = is_sorted(nums.begin(),nums.end()) || (k>1);

    if(!ans) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;    
}
    
    return 0;
}