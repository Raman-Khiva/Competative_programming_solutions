#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'
long long max(long long a, long long b){
    return (a>b)?a:b;
}
int main() {
    fastio();
    
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<long long> nums(n);
    for(long long &num : nums) cin>>num;
    sort(nums.begin(),nums.end());
    long long ans = 0;
    long long prv = -2;
    long long cnt = 0;
    int i=0;
    while(i<n){
        long long cur = nums[i];
        int j = i;
        while((j<n) && nums[j]==cur){
            j++;
        }
        int curCount = j-i;
        if(cur!= (prv+1)){
            ans += cnt;
            cnt = curCount;
        }else{
            long long maxi = max(cnt,curCount);
            cnt = curCount;
            ans += maxi-curCount;
        }
        prv = cur;
        i=j;
    }
    ans+=cnt;
    cout<<ans<<endl;
}
    
    return 0;
}