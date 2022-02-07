
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;
//K closest numbers
//heap

//#define minh priority_queue<int,vector<int>,greater<int>>

void fun(int arr[], int n, int k, int x)
{
  priority_queue<pair<int,int>> maxh;
  
  int sum;
  int num;
  
  for(int i=0;i<n;i++)
  {
      num=arr[i]-x;
      
      if(num!=0)
      maxh.push({abs(num),i});
      
      while(maxh.size()>k)
      {
          maxh.pop();
      }
      
  }
  
  while(maxh.size()>0)
  {
      cout<<arr[maxh.top().second]<<" ";
      maxh.pop();
  }
  
  
}

int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    fun(arr,n,k,x);
    

    return 0;
}
