#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main(){
    int N;
    cin >>N;
    vector<int> p(N);
    for(int i=0; i<N; i++){
        cin >>p[i];
    }
    vector<pair<char,ll>> v;
    for(int i=1; i<N; i++){
        if(p[i]>p[i-1]){
            if(v.empty()||v.back().first=='>'){
                v.push_back({'<',1});
            }else{
                v.back().second++;
            }
        }else{
            if(v.empty()||v.back().first=='<'){
                v.push_back({'>',1});
            }else{
                v.back().second++;
            }
        }
    }
    ll ans=0;
    N=v.size();
    for(int i=1; i<N-1; i++){
        if(v[i].first=='>'){
            ans+=v[i-1].second*v[i+1].second;
        }
    }
    cout <<ans;
    return 0;
}