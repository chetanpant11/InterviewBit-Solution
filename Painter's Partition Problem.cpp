#include <bits/stdc++.h>
#define ll long long
using namespace std;

unsigned long long int mod =1e9+7;


bool can_paint(vector<int>&v, int mid,int b)
{
    int sum=0;
    int count=1;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        if(sum>mid)
        {
            count++;
            sum=v[i];
            if(count>b)
                return false;
        }
        if(sum<=mid)
        {
            continue;
        }

    }
    return true;

}

int solve(vector<int>&v, int n,int b)
{
    int ans=INT_MAX;
    int high=0;
    for(int i=0;i<v.size();i++)
    {
        high+=v[i];
    }
    int low=*max_element(v.begin(),v.end());
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(can_paint(v,mid,b))
        {
            high=mid-1;
            ans=min(ans, mid);
        }
        else
            low=mid+1;
    }
return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int b;
    cin>>b;
    int time;
    cin>>time;
    cout<<time*solve(v,n,b);

}

