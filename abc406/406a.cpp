#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main(){
    int a,b,c,d;
    cin >>a >>b >>c >>d;
    if(a<c){
                    cout <<"No";
            return 0;
    }else if (a==c){
                if(b<d){
            cout <<"No";
            return 0;
        }
    }else{
        
    }
        cout <<"Yes";
    return 0;
}