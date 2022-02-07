
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;

//K closest points to origin
void fun(int arr[][2], int m, int n, int k)
//void fun(vector<vector<int>> arr, int m, int n, int k)
{
    priority_queue<pair<int,pair<int,int>>> maxh;
    int sum=0;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum+=(arr[i][j]*arr[i][j]);   
        }
        maxh.push({sum,{arr[i][0],arr[i][1]}});


    while(maxh.size()>k)
    {
        maxh.pop();
    }
     sum=0;
    }
    
    
    while(maxh.size()>0)
    {
        cout<<maxh.top().second.first<<" "<<maxh.top().second.second<<endl;
        maxh.pop();
    }
    
   
    
}


int main()
{
    int m,n,k;
    cin>>m>>n>>k;
   // vector<vector<int>> arr(m);
    int arr[m][2];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int res;
    
    fun(arr,m,2,k);

    return 0;
    
}
