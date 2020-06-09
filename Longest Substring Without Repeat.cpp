#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string A;
    cin>>A;
    int ptr1=0;
    int ptr2=0;
    int max_length=0;
    unordered_map<char,int> mymap;
    while(ptr2<A.size())
    {
    mymap[A[ptr2]]++;
     if(mymap[A[ptr2]]>1)
     {
         if(ptr2-ptr1>max_length)
         {
               max_length=ptr2-ptr1;
         }
          while(mymap[A[ptr2]]!=1)
         {
             mymap[A[ptr1]]--;
             ptr1++;
         }
    }
    ptr2++;
    }
    max_length=max(ptr2-ptr1,max_length);
    cout<<max_length;
}


