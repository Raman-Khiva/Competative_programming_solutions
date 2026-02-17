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
    vector<ll> a(n);
    for(auto &x : a) cin>>x;

    if(is_sorted(a.begin(),a.end())){
        cout<<0<<endl;
        continue;
    }

    if((a[n-2]>a[n-1]) || (a[n-1]<0)){
        cout<<-1<<endl;
        continue;
    }

    cout<<n-2<<endl;

    for(int i=0;i<n-2;i++){
        cout<<i+1<<" "<<n-1<<" "<<n<<endl;
    }

}
    
    return 0;
}