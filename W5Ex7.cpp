#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<utility>
#include<cstring>
using namespace std;
#define ll long long
const int MAX=1e4+1;

int dx[3]={1, 1, 1};
int dy[3]={-1, 0, 1};
bool visited[1005][1005]; 
int n, m;
vector<string> v;
void kt(){
    memset(visited, false, sizeof(visited));
}
void solve(int x, int y){
    if(x==n-1){
        cout<<"YES";
        return;
    }
    queue<pair<int, int>> q;
    q.push({x, y});
    while(!q.empty()){
        pair<int, int> now=q.front(); q.pop();
        if(now.first==n-1){
            cout<<"YES";
            return;
        }
        for(int k=0; k<3; k++){
            int i=now.first+dx[k];
            int j=now.second+dy[k];
            if(k==0 && v[i-1][j]=='R') continue;
            else if(k==2 && v[i-1][j]=='R') continue;
            if(i<n && i>=0 && j<m && j>=0 && v[i][j]=='E' && !visited[i][j]){
                q.push({i, j});
                visited[i][j]=true;
                if(now.first==n-1){
                    cout<<"YES";
                    return;
                }
            }
        }
    }
    cout<<"NO";
} 

int main(){
    kt();
    cin>>m>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int x=0, y=0; 
    for(int i=0; i<n; i++){
        bool find=true;
        for(int j=0; j<m; j++){
            if(v[i][j]=='Y'){
                x=i; y=j; 
                find=false;
                break;
            }
        }
        if(!find) break;
    }
    solve(x,y);
    cout<<endl;
}