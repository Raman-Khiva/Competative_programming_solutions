#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define endl '\n'

bool check(vector<vector<int>> &cols, int steps){
    for( auto col : cols){
        bool avl = 1;
        bool ans = true;
        for(int i=1;i<col.size();i++){
            if((col[i]-col[i-1]-1)<=steps){
                continue;
            }else if((!avl) || (col[i]-col[i-1]-1>steps*2+1)){
                ans = false;
                break;
            }else{
                avl = 0;
            }
       }
       if(ans) return true;
    }
    return false;
}

int helper(vector<vector<int>> &cols, int k,int n){
    int si = 0;
    int ei = n;

    while(si<ei){
        int mid = (si+ei)/2;
        if(check(cols,mid)){
            ei  = mid ;
        }
        else si = mid+1;
    }
    return ei;
    
}

int main() {
    fastio();
    
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    vector<vector<int>> cols(k);
    for(int i=0;i<k;i++) cols[i].push_back(0);
    for(int i=0;i<n;i++){
        cols[nums[i]-1].push_back(i+1);
    }
    for(int i=0;i<k;i++) cols[i].push_back(n+1);

    cout<<helper(cols,k,n)<<endl;

}
    return 0;
}