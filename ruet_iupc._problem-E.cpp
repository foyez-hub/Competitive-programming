#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//problem-E
int main()
{
    ll n;
    cin >> n;
    map<string, bool> cur_username,uni;
    map<string, string> initial_username;

    while (n--)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            // x->y
            string x, y;
            cin >> x >> y;
            uni[x]=true;
            uni[y]=true;
            if (!cur_username[x] && !cur_username[y])
            {
                cur_username[y] = true;
                initial_username[y] = x;
                //cout<<1<<endl;
            }
            else if (cur_username[x] && !cur_username[y])
            {
               // cout<<2<<endl;
                cur_username[x] = false;
                cur_username[y] = true;

                string parentOfx = initial_username[x];
                initial_username[y] = parentOfx;
            }
            else if (!cur_username[x] && cur_username[y])
            {
                cur_username[x] = true;
                initial_username[x] = x;

            }
        }
        else
        {

            string x;
            cin >> x;
            if(!uni[x]){

                cout<<x<<endl;
                cur_username[x] = true;
                initial_username[x] = x;

            }
            else if(!cur_username[x]){
                cout<<"Not in use!"<<endl;
            }
            else{

                cout<<initial_username[x]<<endl;
            }
        }
    }
}
