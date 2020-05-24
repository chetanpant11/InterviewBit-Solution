#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long int mod =1e9+7;

void print_board(vector<vector<int>>&v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            cout<<setw(3)<<v[i][j];
        }
        cout<<endl;
    }
}

bool can_place(vector<vector<int>>&v,int row, int col, int curNum)
{
    for(int i=0;i<9;i++)
    {
        if(v[row][i]==curNum)return false;
        if(v[i][col]==curNum)return false;
    }
    int boxCol=col/3;
    int boxRow=row/3;
    int boxCol_start=boxCol*3;
    int boxRow_start=boxRow*3;

    for(int i=boxRow_start;i<boxRow_start+3;i++)
    {
        for(int j=boxCol_start;j<boxCol_start+3;j++)
        {
            if(v[i][j]==curNum)
                return false;
        }
    }
return true;
}

bool solve(vector<vector<int>>&v,int row, int col)
{
    if(col==v.size())
    {
        return solve(v,row+1,0);
    }
    if(row==v.size())
    {
        return true;
    }
    if(v[row][col]!=0)
    {
        return solve(v,row,col+1);
    }
    for(int i=1;i<=9;i++)
    {
        if(can_place(v,row,col,i)==true)
        {
          v[row][col]=i;
          bool suc=solve(v,row,col+1);
          if(suc==true)
             return  true;
          v[row][col]=0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>v={{5,3,0,0,7,0,0,0,0}, {6,0,0,1,9,5,0,0,0}, {0,9,8,0,0,0,0,6,0}, {8,0,0,0,6,0,0,0,3}, {4,0,0,8,0,3,0,0,1}, {7,0,0,0,2,0,0,0,6}, {0,6,0,0,0,0,2,8,0}, {0,0,0,4,1,9,0,0,5}, {0,0,0,0,8,0,0,7,9}};
    solve(v,0,0);
    print_board(v);
}

