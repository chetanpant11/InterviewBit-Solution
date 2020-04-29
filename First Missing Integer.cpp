#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &A) {
    int n=A.size();
    {
        for(int i = 0; i < n; ++ i)
            if(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
                swap(A[i], A[A[i] - 1]);

        for(int i = 0; i < n; ++ i)
            if(A[i] != i + 1)
                return i + 1;

        return n + 1;
    }
        }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    int ans;
    for(int i=0;i<n;i++)
        cin>>v[i];
    ans=solve(v);
    cout<<ans;
}
