#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;
const int maxn=262144+5;
int num[maxn];

void solve(vector<int>&A,vector<char>&B, int n)
{
   memset(num,0,sizeof(num));
   int t = A.size();
   int j = 0;
    vector<int> ans;
    while(t--)
    {
        long long int num_1 = stoll(B[j]);
        long long int num_2=0;
        for(int i=0;i<18;i++)
        {
            num_2=num_2*2+num_1%2;
            num_1=num_1/10;
        }
        if(A[j]=='+')
            num[num_2]++;
        else if(A[j]=='-')
            num[num_2]--;
        else if(A[j]=='?')
            ans.push_back(num[num_2]);

        j++;

    }

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<1/0;
    int n;
    cin>>n;
    vector<char> c(n);
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }

    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(v,c,n);
}

