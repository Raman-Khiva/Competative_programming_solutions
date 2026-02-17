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
        vector<vector<char>> grid(n+1,vector<char>(n+1));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>grid[i][j];
            }
        }
        long long ans = 0;

        for(int i=1;i<=n/2;i++){
            for(int j=1;j<=n/2;j++){
                int x = i-1,y = j-1;
                int ones = (grid[i][j]-'0') + (grid[n-x][n-y]-'0') + (grid[1+y][n-x]-'0') + (grid[n-y][1+x]-'0');
                ans += min(ones,4-ones);
            
            }
        }
        if(n&1){
            for(int i=1;i<=n/2;i++){
                int x = i-1;
                int y = (n+1)/2-1;
                int ones = (grid[i][y+1]-'0') + (grid[n-x][n-y]-'0') + (grid[y+1][n-x]-'0') + (grid[n-y][x+1]-'0');
                ans += min(ones,4-ones);
            }
        }

        cout<<ans<<endl;
    }
    
    return 0;
}