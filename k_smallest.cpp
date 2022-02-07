
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
typedef pair<int,pair<int,int>>
using namespace std;

int fun(int arr[],int n,int k)
{
//heap
//k smallest number
priority_queue<int>maxh;

for(int i=0;i<n;i++)
{
    maxh.push(arr[i]);
    
    if(maxh.size()>k)
    {
        maxh.pop();
    }
    
}

return maxh.top();

    
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int res;
    res=fun(arr,n,k);
    cout<<res;
    return 0;
}
