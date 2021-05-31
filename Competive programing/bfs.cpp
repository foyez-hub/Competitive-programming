#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int r,c;
vector<vector<pair<int,int>>> path;
char path1[100][100];
//vector<vector<char> > path1(r, vector<char>(c))
int visited[1000][1000]={0};

int dis[1000][1000];
// char mat[1000][1000];

bool isvalid(int i,int j){

   if(i<0|| i>=r || j<0 || j>=c||  visited[i][j]==1 ){
        return false;
    }
     return true;
}

int dx[]={-1,  0,    1,     0};
int dy[]={0,   1,    0,    -1};

void bfs(int i,int j){

    queue<pair<int,int> > q;
    q.push({i,j});
    visited[i][j]=1;
    dis[i][j]=0;
    path[i][j]={-1,-1};

    while (!q.empty())
    {
          int a=q.front().first;
          int b=q.front().second;
            q.pop();


                for (int  j = 0; j < 4 ;j++)
                {
                  int n1=a+dx[j];
                  int n2=dy[j]+b;

                  if(isvalid(n1,n2)){
                    q.push({n1,n2});
                    dis[n1][n2]=dis[a][b]+1;
                    visited[n1][n2]=1;

                    path[n1][n2]={a,b};
                   // if(mat[n1][n2]=='B') break;



                 }

                }
    }






}


int main(){



 	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> r >> c;
	path.resize(r);
	//path1.resize(r);
	//vis.resize(n);
	for(int i = 0; i < r; ++i)
	{
		path[i].resize(c);
		//path1[i].resize(c);
	//	vis[i].resize(m);
	}


         int endi=-1;
         int endj=-1;
         int starti=-1;
         int startj=-1;

        for (int i = 0; i <r; i++)
        {
          string s;
          cin>>s;

          for (int j =0; j < s.size(); j++)
          {
            if(s[j]=='#'){
              visited[i][j]=1;
            }
              //  cin>>mat[i][j];
             //  cout<<mat[i][j];
                if(s[j]=='B'){
                 endi=i;
                 endj=j;

               }

                if(s[j]=='A'){
                 starti=i;
                 startj=j;

               }
          }
          //cout<<endl;

        }

          bfs(starti,startj);
          // cout<<visited[endi][endj]<<endl;
          // for (int i = 0; i < r; i++)
          // {
          //   for (int j = 0; j < c; j++)
          //   {
          //     cout<<visited[i][j]<<" ";
          //   }
          //   cout<<endl;

          // }


          if(visited[endi][endj]==0|| dis[endi][endj]==0 ){
            cout<<"NO"<<endl;
          }
          else {

                vector<pair<int,int> > v;

          int i=endi;
          int j=endj;

        // cout<<"{"<<i<<","<<j<<"} ";
          v.push_back({i,j});

          while(1){


              if(path[i][j].first==-1 && path[i][j].second==-1){
              break;
            }

        // cout<<"{"<<path[i][j].first<<","<<path[i][j].second<<"} ";
                v.push_back({path[i][j].first,path[i][j].second});
              int temi=i;
              int temj=j;

              i=path[temi][temj].first;
              j=path[temi][temj].second;
            //  cout<<"i="<<i<<" j="<<j<<endl;


          }




             cout<<"YES"<<endl;
             cout<<dis[endi][endj]<<endl;

             reverse(v.begin(),v.end());
             int l=v.size()-1;
             for (int i = 0; i <l; i++)
             {

               if(v[i].first==v[i+1].first){
                 if(v[i].second>v[i+1].second){
                   cout<<"L";
                 }
                 else{
                   cout<<"R";

                 }
               }
               else if(v[i].second==v[i+1].second){
                 if(v[i].first>v[i+1].first){
                   cout<<"U";
                 }
                 else{
                   cout<<"D";

                 }
               }


             }
             cout<<endl;


          }




}

        //    for (int i = 1000; i <=9999; i++)
        //  {
        //      visited[i]=0;
        //     //  //color[i]=-1;
        //       dis[i]=-1;
        //      //adj[i].clear();
        //   }

        // for (int i = 0; i < edge; i++)
        // {
        //     int n1,n2;
        //     cin>>n1>>n2;
        //     adj[n1-1].push_back(n2-1);
        //     adj[n2-1].push_back(n1-1);
        // }
