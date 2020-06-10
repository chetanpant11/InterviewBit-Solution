#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    string a="";
    string temp="";
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==' '||s[i]=='\0')
        {
        reverse(temp.begin(), temp.end());
        a+=temp+" ";
        temp="";
        }
        else
            temp+=s[i];
    }
    reverse(temp.begin(), temp.end());
    a+=temp;
    cout<<a;

}
