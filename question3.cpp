#include <bits/stdc++.h>
#include <cmath>

using namespace std;



int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        int m = sqrt(n);
        int ans = 1;
        
        for(int i=1;i<=n;i++){
            if(n%i!=0){
                break;
            } 
            ans = i;
            
        }
        cout<<ans<<endl;
 
    }

}