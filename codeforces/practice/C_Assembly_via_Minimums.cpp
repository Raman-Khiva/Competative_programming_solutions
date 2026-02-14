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
    long long n;
    cin>>n;
    long long sz = (n*(n-1))/2;
    vector<long long> nums(sz);
    for(int i=0;i<sz;i++) cin>>nums[i];

    sort(nums.begin(),nums.end());

    vector<long long> ans;
    int i=0;
    int k=n-1;
    while(i<sz){
        ans.push_back(nums[i]);
        i+=k;
        k--;
    }
    ans.push_back(1e9);
    for(long long num : ans) cout<<num<<" ";
    cout<<endl;

}
    
    return 0;
}