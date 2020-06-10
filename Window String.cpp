#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string A;
    string B;
    cin>>A>>B;
    int mini=INT_MAX;
    int mymap_a[128]={0};
    int mymap_b[128]={0};
    for(int i=0;i<B.size();i++)
    {
     mymap_b[B[i]]++;
    }

    int j=0,i=0,save=0,count=0,chk=false,save1,save2;
    for(j=0;j<A.size();j++)
    {

        if(mymap_b[A[j]]==0){
            continue;
            }
        //mymap[A[j]]=0;
        if(mymap_a[A[j]]<mymap_b[A[j]])
        {
            count++;
            if(count==B.length()){
                chk=true;
            }
        }

        mymap_a[A[j]]++;
        while(i<j)
        {
            if(mymap_b[A[i]]==0)
            {
                i++;
            }
            else if(mymap_a[A[i]]>mymap_b[A[i]])
            {
                mymap_a[A[i]]--;
                i++;
            }
            else {
                break;
            }
        }

        if (chk && j-i+1<mini)
        {
             mini=j-i+1;
              save1=i;
              //save2=j;
        }

    }
    string s="";
    if(chk)
    {
    cout<<A.substr(save1,mini);
    }
    cout<<s;

}

