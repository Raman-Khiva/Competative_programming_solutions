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
    long long n,x,y;
    cin>>n>>x>>y;
    long long common = n/((x*y)/__gcd(x,y));
    long long high = n/x - common;
    long long low  = n/y - common;
    long long high_sum = (n*(n+1))/2 - ((n-high)*(n-high+1))/2;
    long long low_sum  = (low *(low+1))/2;
    cout<< high_sum - low_sum<<endl;
}
    
    return 0;
}