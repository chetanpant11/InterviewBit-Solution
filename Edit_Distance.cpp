#include<bits/stdc++.h>
using namespace std;
int ED(string s1, string s2)
{
    vector<vector<int>>dp(s1.size()+1, vector<int>(s2.size()+1,0));
    for(int i=0;i<=s1.size();i++)
    {
        for(int j=0;j<=s2.size();j++)
        {
            //cout<<"he"<<endl;
            if(i==0&&j==0)
                {dp[i][j]=0;
                continue;}
            else if(i==0)
                dp[i][j]=1+dp[i][j-1];
            else if(j==0)
                dp[i][j]=1+dp[i-1][j];
            else
                if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1];
                else
                dp[i][j]=min(min(1+dp[i-1][j], 1+dp[i-1][j-1]),1+dp[i][j-1]);
        }
    }
    for(int i=0;i<=s1.size();i++)
    {
        for(int j=0;j<=s2.size();j++)
        {
                cout<<dp[i][j]<<" ";}
        cout<<endl;
    return dp[s1.size()][s2.size()];
}}


int main()
{
    string s1, s2;
    s1="ba";
    s2="aa";
    int ans=ED(s1, s2);
    cout<<ans;
}
