#include <bits/stdc++.h>

using namespace std;



int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int odd = 0;
        int even = 0;
        int freq[26] = {0};
        for(char c : s){
            freq[c-'a'] += 1;
        }
        for(int i=0;i<26;i++){
            odd += freq[i]%2;
            even += freq[i]/2;
        }
        int m = n-k;
        if(m&1){
            m-=1;
            if(odd){
                odd-=1;
            }
            else{
                odd+=1;
                even-=1;
            }
        }
        if(k<odd) cout<<"No"<<endl;
        else{
            k-=odd;
            if(k&1) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }

}