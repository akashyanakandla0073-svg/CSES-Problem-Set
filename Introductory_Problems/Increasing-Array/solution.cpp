#include<bits/stdc++.h>
using namespace std;
void solve(){ // 3 2 5 1 7
    int n; ///// 3 3 5 5 7
    cin >> n;//  0 1 2 3 4  ///--> a[i-1] > a[i] => a[i]=a[i-1]
    vector<int> a(n);
    for(int& ele: a) cin >> ele;
    long long cnt=0;
    for(int i=1;i<n;++i){
        if(a[i-1]>a[i]){//3>2
            cnt=cnt + a[i-1]-a[i];
            a[i]=a[i-1];
            // cnt=cnt + a[i-1]-a[i];
        }
    }
    cout << cnt;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}