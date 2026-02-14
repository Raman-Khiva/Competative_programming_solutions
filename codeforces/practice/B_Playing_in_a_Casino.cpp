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
    int n,m;
    cin>>n>>m;
    vector<vector<long long>> grid(m,vector<long long>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[j][i];
        }
    }

    for(auto &row : grid){
        sort(row.begin(),row.end());
    }

    long long total = 0;

    for(int i=0;i<m;i++){
        long long curSum = 0;
        for(int j=0;j<n;j++){
            total  +=  grid[i][j]*j - curSum;
            curSum += grid[i][j];
        }
    }

    cout<<total<<endl;

}
    
    return 0;
}