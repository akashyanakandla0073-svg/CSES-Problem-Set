#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n=s.size();
    int ans = 1;
    int left=0;
    for(int right=1;right < n ; ++right){
        if(s[left]==s[right]){
            ans=max(ans,right-left+1);
        }
        else if(s[left] != s[right]) left=right;
    }
    cout << ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}