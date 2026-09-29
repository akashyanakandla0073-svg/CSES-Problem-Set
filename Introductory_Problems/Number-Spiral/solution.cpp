#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin >> t;
    long long y,x;
    while(t--){
        long long ans=0;
        cin >> y >> x;
        long long M=max(y,x);
        if(M==x){
            if(M& 1) ans=M*M;
            else ans=(M-1)*(M-1)+y;
        }
        else{
            if(M&1) ans=(M-1)*(M-1)+x;
            else ans=M*M;
        }
        cout << ans<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}