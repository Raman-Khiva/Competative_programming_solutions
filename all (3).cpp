#include <bits/stdc++.h>
using namespace std;


long long min(long long a, long long b){
    if(a<b) return a;
    return b;
}


int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
       int a,b,n;
       cin>>a>>b>>n;
       long long ans = b;
       while(n--){
           long long x;
           cin>>x;
           ans += min(x,a-1);
       }
       
       cout<<ans<<endl;
       
       
       
       
    }

}