#include <bits/stdc++.h>
using namespace std;
vector<int> next_p(vector<int>&A)
{
    int i=0 ,j=0;
for(i=A.size()-1;i>=0;i--){
  if(A[i-1]<A[i])
  {
      break;
  }
}
 if(i==0){
      sort(A.begin(),A.end());
      return A;
  }
  int save=i-1;
  int no=A[save];
  int min=A[save+1];
  int save2=save+1;
  for(int j=save+1;j<A.size();j++)
  {
     if(min>A[j]&& A[j]>no)
     {
         min=A[j];
         save2=j;
     }
}
int temp=A[save];
A[save]=A[save2];
A[save2]=temp;
sort(A.begin()+save+1,A.end());
return A;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> ans(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ans=next_p(v);
    //ans= next_permutation(v.begin(),v.end());
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
}

