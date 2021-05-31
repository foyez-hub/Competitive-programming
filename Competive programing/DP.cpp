#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll dp[100000];
ll a[100000];

 int Knapsack(int w[],int val[],int W,int n){
       if(W==0||n==0){
           return 0;
       }
       if(w[n]<=W){
           return max(val[n]+Knapsack(w,val,W-w[n],n-1),Knapsack(w,val,W,n-1));
       }
       else{
            return Knapsack(w,val,W,n-1);
       }
 }


 ll jump(ll a[],ll n){

     if(dp[n]!=-1) return dp[n];
     if(n==0) return 0;
     return  dp[n]=min(abs(a[n]-a[n-1])+jump(a,n-1),abs(a[n]-a[n-2])+jump(a,n-2));

    
 }


int main(){
    
    memset(dp,-1,sizeof(dp));
    

}