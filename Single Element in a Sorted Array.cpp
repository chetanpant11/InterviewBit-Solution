#include <bits/stdc++.h>
#define ll long long
unsigned long long int mod =1e9+7;

using namespace std;
int binary_search(int low,int high,vector<int> &A)
{
    int leftcount,rightcount;
    int save;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
       if(A[mid+1]!=A[mid] && A[mid-1]!=A[mid])
        {
            return A[mid];
        }
        if(A[mid]==A[mid-1])
        {
            mid--;
        }
        leftcount=mid-1;
        rightcount=high-mid-1;
        if(rightcount%2!=0)
        {
          low=mid+2;  +++
        }
        if(leftcount%2!=0){
          high=mid-1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    if(A.size()==0){
    return 0;
}
//this thing is used to avoid errors like when we go out of bond in array
    A.insert(A.begin(),INT_MIN);
    A.push_back(INT_MIN);
     int low=1;
     int high=A.size()-2;
     int ans=binary_search(low,high,A);
     cout<<ans;
}
