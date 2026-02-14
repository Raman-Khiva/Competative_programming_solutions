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
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    long long ans = 2;

    while(true){
        set<long long> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]%ans);
        }
        if(s.size()==2) break;
        ans *= 2;
    }
    cout<<ans<<endl;
}
    
    return 0;
}