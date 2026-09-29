#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long k=1;
    while(n--){
        long long totPairs=(k*k * (k*k-1))/2;
        long long atckPairs = 4 * (k-1)*(k-2);
        cout << totPairs-atckPairs << "\n";
        k++;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}