
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;
//window sliding technique

int fun(int arr[],int n,int k)
{
    int count=0;
    int temp,sum=0;
    int maxx=0,curr_max=0;
    for(int i=0;i<k;i++)
    sum+=arr[i];
    maxx=sum;
    
    for(int i=k;i<n;i++)
    {   
        sum=sum+arr[i]-arr[i-k];
        if(sum>maxx)
        maxx=sum;
    }
    
    return sum;
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
