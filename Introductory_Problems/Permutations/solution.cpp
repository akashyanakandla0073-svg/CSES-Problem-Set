#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    if(n==2 || n==3){ cout << "NO SOLUTION"; return;}
    for(int i=2;i<=n;i+=2){
        if(i%2==0) cout << i << " ";
    }
    for(int i=1;i<=n;i+=2){
        if(i%2!=0) cout << i << " ";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}