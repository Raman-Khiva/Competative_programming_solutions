#include <bits/stdc++.h>
using namespace std;





int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
       long long n,k,x;
       cin>>n>>k>>x;
       
       long long low = (k*(k+1))/2;
       long long high = (n*k - (k*(k-1))/2);
       if(x<=high && x>=low) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
       
       
    }

}