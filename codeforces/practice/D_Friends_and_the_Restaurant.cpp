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

    vector<long> x(n),y(n);

    for(long &num : x) cin>>num;
    for(long &num : y) cin>>num;

    vector<long> diff;

    for(int i=0;i<n;i++){
        diff.push_back(y[i]-x[i]);
    }

    sort(diff.begin(),diff.end());
    int l = 0;
    int r=0;

    while((l<n) && (diff[l]<0)) l++;

    r=l;
    l--;

    int rem = 0;
    int ans = 0;

    while((l>=0) && r<n){
        if((diff[l]+diff[r])>=0){
            l--;
            ans++;
        }else{
            rem +=1;
        }
        r++;
    }

    rem += (n-r);
    ans += rem/2;

    cout<<ans<<endl;

}
    
    return 0;
}