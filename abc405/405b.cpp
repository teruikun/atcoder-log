#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main(){
    int N,M;
    cin >>N >>M;
    vector<int> A(N);
    for(int i=N-1; i>=0; i--){
        cin >>A[i];
    }

    for(int i=0; i<N+1; i++){
        vector<bool> aru(M+1,false);
        for(int j=0; j<A.size(); j++){
            for(int k=1; k<M+1; k++){
                if(A[j]==k){
                    aru[k]=true;
                }
            }
        }
        bool flag=true;
        for(int j=1; j<M+1; j++){
            if(aru[j]==false){
                flag=false;
            }
        }
        if(flag==false){
            cout <<i;
            return 0;
        }
        A.erase(A.begin());
    }


    cout <<0;
}