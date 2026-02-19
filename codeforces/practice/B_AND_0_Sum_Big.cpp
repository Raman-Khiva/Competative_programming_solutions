#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'
int mod = 1e9+7;

ll pow(ll a, ll b){
    if(b==1) return a%mod;

    if(b&1) return (a*pow(a,b-1))%mod;

    ll dob = (a*a)%mod;

    return pow(dob,b/2)%mod;
}


int main() {
    fastio();
    
int t;
cin>>t;
while(t--){
    ll n, k;
    cin>>n>>k;
    cout<<pow(n,k)<<endl;
}
    
    return 0;
}