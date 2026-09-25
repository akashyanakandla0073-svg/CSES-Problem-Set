#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    while(n != 1){
        cout << n << " ";
        if(n& 1) n = n * 3 + 1;
        else n = n / 2;
    }
    cout << 1 ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}