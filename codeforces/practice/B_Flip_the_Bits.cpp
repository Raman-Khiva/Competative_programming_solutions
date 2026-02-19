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
    string a,b;
    cin>>a>>b;

    vector<int> cnt(n,0);
    for(int i=0;i<n;i++){
        if(i>0){
            cnt[i] += cnt[i-1];
        }
        cnt[i] += a[i]=='1'?1:-1;
    }
    int ops = 0;
    int i = n-1;
    bool ans = true;
    while(i>=0){
        if(((ops==1) && (a[i]!=b[i])) || ((ops==0) && (a[i]==b[i]))){
            i--;
            continue;
        }
        if(cnt[i]==0){
            ops = (ops+1)%2;
            i--;
        }
        else{
            ans = false;
            break;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }  
    return 0;
}