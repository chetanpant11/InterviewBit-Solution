#include <bits/stdc++.h>
using namespace std;

int solve(int A, int B, int C, int D, int E, int F, int G, int H)
{
if(E>=C||F>=D||A>=G||H<=B){
    return 0;
}
int bottomleft_x=max(A,E);
int bottomleft_y=max(B,F);
int topright_x=min(C,G);
int topright_y=min(D,H);

return abs((topright_y-bottomleft_y)*(topright_x-bottomleft_x));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A; int B; int C; int D; int E; int F; int G; int H;
    cin>>A>>B>>C>>D>>E>>F>>G>>H;
    cout<<solve(A,B,C,D,E,F,G,H);
}
