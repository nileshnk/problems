
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;
//window sliding technique
// 1 4 20 3 10 5 -->33
bool fun(int arr[],int n,int sum)
{
    int curr_sum=arr[0];
    int pre=0;
    int pos;
    
    for(int i=1;i<n;i++)
    {
        if(curr_sum<sum)
        {
            curr_sum+=arr[i];
        
            
        }else if(curr_sum>sum)
        {
            curr_sum=curr_sum-arr[pre];
            pre++;
            
        }else if(curr_sum==sum)
        return true;
    }
    return false;
    
}

int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    bool res;
    res=fun(arr,n,sum);
    cout<<res;
    return 0;
}
