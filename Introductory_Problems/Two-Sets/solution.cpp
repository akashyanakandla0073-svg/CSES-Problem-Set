#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long m=n;
    long long sum=0,i=1;
    while(m--){
        sum +=i;
        ++i;
    }
    // cout << sum;
    // sum/2&1 ? cout << "NO" : cout << "YES"<<"\n";
    if(sum & 1){
        cout << "NO"; return;
    }
    cout << "YES"<<"\n";
    //14-7=7-6=1-1=0//..7,6,1
    vector<int> flag(n+1,0);
    long long tar=sum/2; long long cnt1=0;
    for(int i=n;i>=1;--i){
        if(i <= tar){
            tar=tar-i;
            flag[i]=1;
            cnt1++;
        }
    }
    cout << cnt1<<"\n";
    for(int i=0;i<=n;++i){
        if(flag[i]==1) cout << i << " ";
    }
    cout <<"\n";
    cout << n - cnt1<<"\n";
    for(int i=1;i<=n;++i){
        if(flag[i]==0) cout << i << " ";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}