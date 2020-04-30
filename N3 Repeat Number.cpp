#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr)
{
int  n=arr.size();
    int count1 = 0, count2 = 0;
    int first=INT_MAX    , second=INT_MAX    ;

    for (int i = 0; i < n; i++) {

        if (first == arr[i])
            count1++;


        else if (second == arr[i])
            count2++;

        else if (count1 == 0) {
            count1++;
            first = arr[i];
        }

        else if (count2 == 0) {
            count2++;
            second = arr[i];
        }


        else {
            count1--;
            count2--;
        }
    }

    count1 = 0;
    count2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == first)
            count1++;

        else if (arr[i] == second)
            count2++;
    }

    if (count1 > n / 3)
        return first;

    if (count2 > n / 3)
        return second;

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    int ans;
    for(int i=0;i<n;i++)
        cin>>v[i];
    ans=solve(v);
    cout<<ans;
}
