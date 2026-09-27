#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n=s.size();
    int ans = 1;
    int current=1;
    for(int i=1;i < n ; ++i){
        if(s[i]==s[i-1]){
            current++;
        }
        else if(s[i] != s[i-1]) current=1;
        ans = max(ans, current);
    }
    cout << ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}