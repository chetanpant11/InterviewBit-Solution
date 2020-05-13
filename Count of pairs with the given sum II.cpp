#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&v, int n,int b)
{
    int j=v.size()-1,ans=0;
    int i=0;
    while(i<=j)
        {
            int count1=1;
            int count2=1;
            if(v[i]+v[j]==b&&v[i]==v[j])
                {
                ans+=(j-i+1)*(j-i)/2;
                break;
                }
            else if(v[i]+v[j]==b)
            {
                while(v[i+1]==v[i]&&i<=v.size()-1)
                {
                    i++;
                    count1++;
                }
                    i++;
                while(v[j-1]==v[j]&&j>=0)
                {
                    j--;
                    count2++;
                }
                j--;
            ans+=count1*count2;
            }
            if(i>v.size()-1 || j<0){
                break;
            }

            if(v[i]+v[j]>b){
                j--;
            }
            if(v[i]+v[j]<b){
                i++;
            }
       }
        return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,b;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>b;
    cout<<solve(v,n,b);
}

