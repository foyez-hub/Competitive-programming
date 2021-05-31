#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;

vector<vector<int> > vis;


bool isvalid(int x,int y,int r,int c){
    if(x<0|| x>=r || y<0 || y>=c||  vis[x][y]==1 ){
        return false;
    }
     return true;
}

         //Up -Left -Down- Right
int dx[]={-1,  0,    1,     0};
int dy[]={0,   1,    0,    -1};

int dfs(int x,int y,int r,int c){
    vis[x][y]=1;
    int ans=1;
    for (int i = 0; i < 4; i++)
    {
        int X=dx[i]+x;
        int Y=dy[i]+y;
        if(!isvalid(X,Y,r,c)){
          continue;
        }
        ans+=dfs(X,Y,r,c);
    }
    return ans;
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N,M;
        cin>>N>>M;
        vis.clear();
        vis.resize(N,vector<int>(M));

        for (int i = 0; i < N; i++)
        {
            string tem;
            cin>>tem;
            for (int j = 0; j < M; j++)
            {
                if(tem[j]=='1'){
                    m[i][j]=1;
                }
                else m[i][j]=0;

                vis[i][j]=0;
                
            }

        }
        int ans=0;
        vector<int> isize;

          for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if(vis[i][j]==0&&m[i][j]==1){
                   isize.push_back(dfs(i,j,N,M));    
               }
            }

        }
        sort(isize.rbegin(),isize.rend());
        for (int i = 0; i < isize.size(); i++)
        {
            if(i%2!=0) ans+=isize[i];
        }
        
        cout<<ans<<endl;




    }


}
