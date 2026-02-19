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
    ll n,k;
    cin>>n>>k;

    if(n%2==0){
        ll ans = k%n;
        if(ans==0) ans=n;
        cout<<ans<<endl;
    }
    else{
        ll shift = n/2;
        ll shifts = (k-1)/shift;
        ll ans = (k+shifts)%(n);
        if(ans==0) ans=n;
        cout<<ans<<endl;
    }
}
    
    return 0;
}