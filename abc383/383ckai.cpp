#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W,D;
    cin >>H >>W >>D;
    vector<vector<char>> S(H+2, vector<char> (W+2,'#'));
    vector<vector<int>> dist(H+2, vector<int> (W+2,-1));
    queue<pair<int,int>> Q;
    for(int i=1; i<H+1; i++){
        for(int j=1; j<W+1; j++){
            cin >>S[i][j];
            if(S[i][j]=='H'){
                Q.push({i,j});
                dist[i][j]=0;
            }
        }
    }



    while(!Q.empty()){
        pair<int,int> miru=Q.front();
        Q.pop();
        int ny,nx;
        ny=miru.first;
        nx=miru.second;

        ny=miru.first-1;
        nx=miru.second;
        if(S[ny][nx]!='#'&&dist[ny][nx]==-1){
            dist[ny][nx]=dist[miru.first][miru.second]+1;
            Q.push({ny,nx});
        }
        ny=miru.first;
        nx=miru.second-1;
        if(S[ny][nx]!='#'&&dist[ny][nx]==-1){
            dist[ny][nx]=dist[miru.first][miru.second]+1;
            Q.push({ny,nx});            
        }        
        ny=miru.first+1;
        nx=miru.second;
        if(S[ny][nx]!='#'&&dist[ny][nx]==-1){
            dist[ny][nx]=dist[miru.first][miru.second]+1;
            Q.push({ny,nx});            
        }
        ny=miru.first;
        nx=miru.second+1;
        if(S[ny][nx]!='#'&&dist[ny][nx]==-1){
            dist[ny][nx]=dist[miru.first][miru.second]+1;
            Q.push({ny,nx});            
        }
    }


    int count=0;
    for(int i=1; i<H+1; i++){
        for(int j=1; j<W+1; j++){
            if(dist[i][j]>-1&&dist[i][j]<=D){
                count++;
            }
        }
    }
    

    cout <<count;

} 