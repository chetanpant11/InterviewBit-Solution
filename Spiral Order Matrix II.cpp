#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> spiral(int n)
{
    int l=0,t=0,b=n-1,r=n-1;
    int d=0,count=1;
    vector<vector<int>>v(n,vector<int>(n,0));
    while(l<=r&&t<=b){
        if(d==0)
        {
        for(int i=l;i<=r;i++){
            v[t][i]=count++;
        }
        d=1;
        t++;
        }
        else if(d==1)
        {
            for(int i=t;i<=b;i++){
            v[i][r]=count++;
        }
            d=2;
            r--;
        }
        else if(d==2)
        {
            for(int i=r;i>=l;i--){
            v[b][i]=count++;
        }
         d=3;
         b--;
        }
        else if(d==3)
        {
            for(int i=b;i>=t;i--){
            v[i][l]=count++;
        }
        l++;
        d=0;
        }
    }
return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>>v(n);
    v=spiral(n);
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
    }
}
