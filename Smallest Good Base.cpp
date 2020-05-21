#include <bits/stdc++.h>
#include <cstdlib> strtol(s.c_str(),0,10);


using namespace std;

long long  __binary_search(long long low,long long high,long long length,long long number)
{
  while(low<=high)
  {
 long long mid=low+(high-low)/2;
 long long  check_base=((long long)pow(mid,length)-1)/(long long)(mid-1);
  if(check_base==number)
  {
      return mid;
  }
  else if(check_base>number)
  {
      high=mid-1;
  }
  else
  {
    low=mid+1;
  }
  }
  return -1;
}

int solve(string A)
{
long long number=stoll(A);
//cout<<number<<" ";
long long  min_length=3;
long long  max_length=(log(number)/log(2))+1;
//cout<<max_length<<" ";
long long  low=2;
long long  high=number-1;
//long long ans=INT_MAX;
//bool chk=false;
for(long long i=max_length;i>=min_length;i--)
{
   long long get_base=__binary_search(low,high,i,number);

   if(get_base!=-1)
   {
   //chk=true;
  // cout<<"TTT ";
   //break;
  string l=to_string(get_base);
  return l;
   }

}
return to_string(number-1);
}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    cout<<solve(s);
}

