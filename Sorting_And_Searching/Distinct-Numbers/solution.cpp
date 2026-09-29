#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int& ele: a) cin >> ele;
    sort(a.begin(),a.end()); long long cnt=1;
    for(int i=1;i<n;++i){
        if(a[i-1]!=a[i]) cnt++;
    }
    cout << cnt;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}