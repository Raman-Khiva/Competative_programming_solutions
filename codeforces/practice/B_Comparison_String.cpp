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
    string s;
    cin>>s;

    int cnt = 1;
    int maxi = 1;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]) cnt++;
        else cnt = 1;
        maxi = max(maxi,cnt);
    }
    cout<<maxi+1<<endl;
}
    
    return 0;
}