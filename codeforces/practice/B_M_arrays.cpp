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
    int n,m;
    cin>>n>>m;
    vector<int> nums(n);
    for(int &num : nums){
        cin>>num;
    }
    unordered_map<int,int> mp;
    for(int num : nums){
        mp[num%m]++;
    }
    ll ans = 0;

    unordered_map<int,bool> done;

    for(auto pr : mp){
        if(done[pr.first] ) continue;
        if((pr.first==0) ||(m-pr.first == pr.first) ){
            done[pr.first] = true;
            ans+=1;
            continue;
        }

        int cros = m-pr.first;
        int cnt = 0;
        if(mp.find(cros)!=mp.end()){
            cnt = mp[cros];
        }
        
        int diff = max(pr.second,cnt)-min(pr.second,cnt) -1;
        ans += max(diff,0);
        ans+=1;

        done[pr.first] = true;
        done[cros] = true;
        
    }
    cout<<ans<<endl;
}
    
    return 0;
}