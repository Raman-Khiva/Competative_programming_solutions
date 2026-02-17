#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'

int helper(string &str,int i,int j,char ch){
    if(i>j) return 0;
    if(str[i]==str[j]){
        return helper(str,i+1,j-1,ch);
    }
    else{
        if(ch<'a' || ch>'z'){
            return min(helper(str,i+1,j,str[i]),helper(str,i,j-1,str[j])) + 1;
        }
        if(str[i]!=ch && str[j]!=ch){
            return 1e6;
        }
        if(str[i]==ch){
            return helper(str,i+1,j,ch) + 1;
        }
        else{
            return helper(str,i,j-1,ch) + 1;
        }
    }
    return 0;
}

int main() {
    fastio();
    
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans = helper(str,0,n-1,'#');
    if(ans>=1e6){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }

}
    
    return 0;
}