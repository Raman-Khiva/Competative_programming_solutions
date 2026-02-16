#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'

int base(int n){
    while(n%2==0) n/=2;
    return n;
}

int main() {
    fastio();
    
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> nums(n+1);
    
    for(int i=1;i<=n;i++){
        cin>>nums[i];
    }
    bool ans = true;

    for(int i=1;i<=n;i++){
        if(base(nums[i])!=base(i)){
            ans = false;
            break;
        }
    }
    
      
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
    
    return 0;
}