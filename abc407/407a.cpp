#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main(){
    double a,b;
    cin >>a >>b;
    ll m=INF;
    for(int i=0; i<999; i++){
        if(abs(a/b-i)<m){
            m=i;
        }
    }
    cout <<m;
    return 0;
}