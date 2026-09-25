#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    vector<int> a(n); int sum=0;
    for(int i=0;i<n-1;++i){
        int x; cin>>x;
        sum += x;
    }
    int tot=n*(n+1)/2;
    cout << tot-sum;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}