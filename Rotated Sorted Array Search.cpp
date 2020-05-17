#include <bits/stdc++.h>
#define ll long long
unsigned long long int mod =1e9+7;

using namespace std;

int binarySearch(const vector<int> &A, int start, int end, int key){
    int mid;
    while(start <= end){
        mid = start + (end-start)/2;
        if(A[mid] == key){
            return mid;
        }
        else if(A[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int solve(vector<int>&v, int n,int b)
{
    int l=0;
    int r=n-1;
    int point;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(v[mid+1]>v[mid]&&v[mid-1]>v[mid])
            {return mid;}
        else if(v[mid]<v[n-1])
            r=mid;
        else if(v[mid]>v[n-1])
            l=mid+1;
    }
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
    int pivot=solve(v,n,b);
    int result = binarySearch(v, 0, pivot-1, b);
        if(result == -1){
           result=binarySearch(v, pivot, v.size()-1, b);
        }

        cout<<result;
}

