#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
      int ans = 0, x = 1;
        while(n > 0) {
            x *= 5;
            if(n%2 == 1)
             ans += x;
            n /= 2;
        }
        return ans;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<solve(n);
}

