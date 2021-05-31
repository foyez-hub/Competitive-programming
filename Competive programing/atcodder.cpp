#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	ll t;
	cin>>t;


	while (t--)
	{
		ll k=1111111111;
		ll n;
		cin>>n;
		int flag=0;

		while (k>=11)
		{
			int tem=n;
			if(k<=n){

			
			if((n-k)%11==0 || (n-k)%111==0 ){
				flag=1;
				break;
			}

			}
			k/=10;

		}

		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
	// for (int i = 0; i < 200; i++)
	// {
	// 	cout<<i*11<<endl;
	// }
	

}
