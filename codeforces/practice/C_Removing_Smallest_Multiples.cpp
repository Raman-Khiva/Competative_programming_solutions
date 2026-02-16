#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'

int main(){

    fastio();
    
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string str;
    cin >> str;

    long long ans = 0;
    vector<int> best(n+1,0);
    for(int i=1;i<=n;i++){
        best[i] = i;
        if(str[i-1]=='1'){
            best[i] = 0;
        }
    }

    for(int i=0;i<n;i++){
        int cur = i+1;
        int j=cur;
        while((j<=n) && (str[j-1]=='0')){
            best[j] = min(best[j],cur);
            j += cur;
        }
    }

    for(int i=1;i<=n;i++){
        ans += best[i];
    }
    cout<<ans<<endl;

}   
    return 0;
}