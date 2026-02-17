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
    char c;
    cin>>c;
    string str;
    cin>>str;
    bool fine = true;
    for(char ch : str) {
        if(ch!=c){
            fine = false;
            break;
        }
    }
    if(fine){
        cout<<0<<endl;
        continue;
    }

    int ans = -1;

    for(int i=n;i*2>n;i--){
        if(str[i-1]==c){
            ans = i;
            break;
        }
    }
    if(ans==-1){
        cout<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<ans<<endl;
    }
}
    
    return 0;
}