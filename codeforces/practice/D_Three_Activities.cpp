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
    set<pair<int,int>> a, b, c;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.insert({x,i});
        if(a.size()>3) a.erase(a.begin());
    }

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        b.insert({x,i});
        if(b.size()>3) b.erase(b.begin());
    }

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        c.insert({x,i});
        if(c.size()>3) c.erase(c.begin());
    }

    long long ans = 0;

    for(auto it=a.begin(); it!=a.end() && distance(a.begin(), it)<3; it++){
        for(auto jt=b.begin(); jt!=b.end(); jt++){
            if(jt->second==it->second) continue;
            for(auto k=c.begin(); k!=c.end(); k++){
                if(k->second==it->second || k->second==jt->second) continue;
                long long cur = it->first + jt->first + k->first;
                ans = max(ans, cur);
            }
        }
    }
    
    cout<<ans<<endl;
  }
    
    return 0;
}