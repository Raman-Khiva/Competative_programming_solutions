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
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int &num : nums) cin>>num;
    int delCount = 0;
    int prv = 0;
    for(int i=1;i<n-1;i++){
        if((nums[i]<=nums[prv] && nums[i+1]<=nums[i]) || (nums[i]>=nums[prv] && nums[i+1]>=nums[i])){
            delCount++;
        }else{
            prv = i;
        }
    }
    if((n-delCount==2) && (nums[0]==nums[n-1])) cout<<1<<endl;
    else cout<<n-delCount<<endl;
}
    
    return 0;
}