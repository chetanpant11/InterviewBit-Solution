#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>> s;
    stack<char>st;
    st.push(-1);
    int count=0, ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
            st.push(i);
        else
        {
            st.pop();

           // cout<<"Yy";
            if(!st.empty())
            {
                ans=max(ans, i-st.top());
            }
            else
                st.push(i);
        }
    }
    cout<<ans;

}

