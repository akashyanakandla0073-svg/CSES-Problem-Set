#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<int> a(n); int currentSum=0;
    for(int i=0;i<n-1;++i){
        int x; cin>>x;
        currentSum += x;
    }
    int tot=n*(n+1)/2;
    cout << tot-currentSum;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}