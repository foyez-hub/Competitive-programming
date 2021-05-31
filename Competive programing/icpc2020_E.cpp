// foyez
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
// vector<int> arr;
// vector<int> tem1;
// vector<int> tem2;
bool issorted(vector<int> &v){
	for (int i = 0; i < v.size()-1; i++)
	{
		if(v[i]>v[i+1]) return false;
	}
	return true;
	
}
void op1(vector<int> &v){
	int mid=v.size()/2;
	for (int i = 0; i < v.size()/2; i++)
	{
		swap(v[i],v[mid+i]);
	}
	
}

void op2(vector<int> &v){
	
	for (int i = 0; i < v.size(); i+=2)
	{
		swap(v[i],v[i+1]);
	}
	
}



int main()
{
	vector<int> arr;
	vector<int> arr1;

    int n;
	cin>>n;
	for (int i = 0; i < 2*n; i++)
	{
		int tem;
		cin>>tem;
		arr.push_back(tem);
	}
	arr1=arr;

    int flag1=0;
	int flag2=0;
	int ans=0;
	for (int i = 1; i <= 2001; i++)
	{
		if(issorted(arr)){
			flag1=1;
			ans=i;
			break;
		}

		if(i%2==0){
			op1(arr);

		}
		else op2(arr);
		
	}

    int ans1=0;
	for (int i = 1; i <= 2001; i++)
	{
		if(issorted(arr1)){
			flag2=1;
			ans1=i;
			break;
		}

		if(i%2==0){
			op2(arr1);

		}
		else op1(arr1);
		
	}
	ans--;
	ans1--;

	if(flag1==1&&flag2==1){
		
		cout<<min(ans,ans1)<<endl;
	}
	else if (flag1==1)
	{
		cout<<ans<<endl;
	}
	else if(flag2==1){
    	cout<<ans1<<endl;

	}
	else cout<<-1<<endl;
	
	

	
	
	return 0;
}

