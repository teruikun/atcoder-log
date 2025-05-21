#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main(){
    int H,W,N;
    cin >>H >>W >>N;
    vector<set<int>> tate(H);
    vector<set<int>> yoko(W);

    for(int i=0; i<N; i++){
        int x,y;
        cin >>x >>y;
        tate[x-1].insert(y-1);
        yoko[y-1].insert(x-1);
    }

    int Q;
    cin >>Q;
    for(int i=0; i<Q; i++){
        int tp,z;
        cin >>tp >>z;
        if(tp==1){
            cout <<tate[z-1].size() <<endl;
            for(auto j:tate[z-1]){

                    yoko[j].erase(z-1);
                    

            }
                            tate[z-1].clear();
        }else{
            cout <<yoko[z-1].size() <<endl;
            for(auto j:yoko[z-1]){

                    tate[j].erase(z-1);
                

    
            } 
                            yoko[z-1].clear();
        }
    }
    
    return 0;
}