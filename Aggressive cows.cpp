#include <bits/stdc++.h>
#define ll long long
using namespace std;

unsigned long long int mod =1e9+7;

bool can_place(vector<int>&v, int n, int b, int mid)
{
    int count=1;
    int temp=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]-temp>=mid)
        {
            temp=v[i];
            count++;
        }
    }
    return count>=b?true:false;

}
int __binarySearch(vector<int>&v, int n, int b)
{
    int ans=INT_MIN;
    int l=1;
    int h=*max_element(v.begin(), v.end());
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(can_place(v,n,b,mid))
        {l=mid+1;
            ans=max(ans,mid);
        }
        else
            h=mid-1;
    }
    return ans;
}

int solve(vector<int>&v, int n, int b)
{
    return __binarySearch(v,n,b);

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
    sort(v.begin(), v.end());
    cout<<solve(v,n,b);
}
