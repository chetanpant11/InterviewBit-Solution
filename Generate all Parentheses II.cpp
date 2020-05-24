#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<string>ans;

void generate_para(int open , int close, int n, int i,vector<char> c)
{
    if(i==2*n)
    {
        string str="";
        for(int i=0;i<c.size();i++)
        {
            str+=c[i];
        }
        ans.push_back(str);
        return;
    }

    if(open<n)
    {
        c[i]='(';
        generate_para(open+1,close,n,i+1,c);
    }
    if(close<open)
    {
        c[i]=')';
        generate_para(open,close+1,n,i+1,c);
    }
return;
}

void solve(int n)
{
    vector<char>c(2*n);
    generate_para(0,0,n,0,c);
}

int main()
{
    int n;
    cin>>n;
    solve(n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}
