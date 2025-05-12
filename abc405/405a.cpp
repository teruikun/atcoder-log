#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main(){
    int R,X;
    cin >>R >>X;
    if(X==1){
        if(1600<=R&&R<=2999){
            cout <<"Yes";
            return 0;
        }
    } else   if(X==2){
        if(1200<=R&&R<=2399){
            cout <<"Yes";
            return 0;
        }
    }
    cout <<"No";
    return 0;
}
