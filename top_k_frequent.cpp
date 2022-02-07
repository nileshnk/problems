
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;
//top k frequent number
//heap

//#define minh priority_queue<int,vector<int>,greater<int>>

void fun(int arr[], int n, int k)
{
  unordered_map<int,int> mp;
  priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> maxh;

  int num;
  
  for(int i=0;i<n;i++)
  mp[arr[i]]++;
  
  //for(int i=0;i<n;i++)
  for(auto it=mp.begin();it!=mp.end();it++)
  {
      //if(num!=0)
      cout<<it->first<<" "<<it->second<<endl;
      maxh.push({it->second,it->first});
      
      while(maxh.size()>k)
      {
          maxh.pop();
      }
      
  }
  cout<<endl;
  
  while(maxh.size()>0)
  {
      cout<<maxh.top().second<<" ";
       maxh.pop();
  }
  
  
}

int main()
{
    int n,k,x;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    fun(arr,n,k);
    

    return 0;
}
