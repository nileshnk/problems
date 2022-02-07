// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
//typedef pair<int,int> ppi;
#define  minheap priority_queue<int,vector<int>,greater<int>>
using namespace std;

void fun(int arr[],int n,int k)
{
//heap
//k largest elements
minheap minh;

for(int i=0;i<n;i++)
{
    minh.push(arr[i]);
    
    if(minh.size()>k)
    {
        minh.pop();
    }
    
}

while(minh.size()>0)
{
    cout<<minh.top()<<" ";
    minh.pop();
}

//return maxh.top();

    
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int res;
    fun(arr,n,k);
    //cout<<res;
    return 0;
}
