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
    int n,s;
    cin>>n>>s;
    vector<int> nums(n);
    for(int & num :nums) cin>>num;
    int ans = -1;
    int curSum = 0;
    int l = 0;
    int r = 0;
    while(r<n){
        curSum += nums[r];
        while(curSum>s){
            curSum -= nums[l];
            l++;
        }
        if(curSum==s){
            ans = max(ans,r-l+1);
        }
        r++;
    }
    if(ans==-1) cout<<-1<<endl;
    else{
    cout<<n-ans<<endl;
    }
}
    
    return 0;
}