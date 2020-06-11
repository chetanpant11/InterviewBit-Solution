#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A;
    cin>>A;
    string final="";
    map<int,string>mymap;
    mymap[1]="I";
    mymap[4]="IV";
    mymap[5]="V";
    mymap[9]="IX";
    mymap[10]="X";
    mymap[20]="XX";
    mymap[30]="XXX";
    mymap[40]="XL";
    mymap[50]="L";
    mymap[90]="XC";
    mymap[100]="C";
    mymap[400]="CD";
    mymap[500]="D";
    mymap[900]="CM";
    mymap[1000]="M";
    auto it=mymap.end();
    it--;
    int quot;
    while(A)
    {
        while(it->first>A)
        {
            it--;
        }
         int save=it->first;
         quot=A/save;
        if(quot>1)
         {
             for(int i=0;i<quot;i++)
             {
                 final+=mymap[save];
                 A-=save;
             }
         }
         else
         {     A=A-save;
              final+=mymap[save];
         }
    }
     cout<<final;

}

