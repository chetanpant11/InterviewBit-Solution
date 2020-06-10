#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    //string b;
    cin>>a;
    string e="";
    string o="";
    for(int i=0;i<a.size();i++)
    {
        if(int (a[i])%2==0)
            e+=a[i];
        else o+=a[i];
    }
    bool chk=true;
    for(int  i=0;i<e.size();i++)
    {
        for(int j=0;j<o.size();j++)
        {
            if(abs(int(e[i])-int(o[j]))>2)
            {
                chk=false;
                break;
            }
        }
        if(chk==false)
        break;
    }
    cout<<(chk==false)?1:0;
}
