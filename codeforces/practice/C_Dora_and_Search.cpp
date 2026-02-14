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
    vector<int> nums(n);
    for(int &num : nums) cin>>num;

    int sm = 1;
    int lg = n;
    int l = 0, r = n-1;
    bool found = false;
    while((r-l) > 2){
        if(nums[l]!=sm && nums[l]!=lg && nums[r]!=sm && nums[r]!=lg){
            cout<<l+1<<" "<<r+1;
            cout<<endl;
            found = true;
            break;
        }

        if(nums[l]==sm || nums[l]==lg){
            if(nums[l]==sm) sm++;
            else lg--;
            l++;
            
        }
        
        if(nums[r]==sm || nums[r]==lg){
            if(nums[r]==sm) sm++;
            else lg--;
            r--;
        }

    }
    if(!found){
        cout<<-1<<endl;
    }

}
    
    return 0;
}