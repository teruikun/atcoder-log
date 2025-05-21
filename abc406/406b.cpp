#include <bits/stdc++.h>
using namespace std;
using ll =long long;
const long long INF = 1LL << 60;

int main(){
    ll n,k;
    cin >>n >>k;
    vector<ll> a(n);
    __int128_t ans=1;
    for(int i=0;i<n; i++){
        cin >>a[i];
        ans*=a[i];
        __int128_t kari=ans;
        ll keta=0;
        while(kari>0){
            kari/=10;
            keta++;
        }
        if(keta>k){
            ans=1;
        }
        
    }
    ll kotae=ans;
    cout <<kotae;
    return 0;
}