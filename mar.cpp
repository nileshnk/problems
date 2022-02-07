
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;

vector<int> mah(vector<int> arr, int n)
{
    stack<pair<int,int>> s,s1;
    vector<pair<int,int>> nsl, nsr;
    int pseudoIndex=7;
    int psi=-1;
    vector<int>width(n);
    vector<int>area(n);
    
    
    //nsl
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        nsl.push_back({-1,psi});
        else if(s.top().first<arr[i])
        {
            nsl.push_back({s.top().first,s.top().second});
        }
        else if(s.size()>0&&s.top().first>=arr[i])
        {
            while(s.size()>0 && s.top().first>=arr[i])
            s.pop();
            
            if(s.empty())
            nsl.push_back({-1,psi});
            else if(s.top().first<arr[i])
            nsl.push_back({s.top().first,s.top().second});
        }
        
        s.push({arr[i],i});
    }
    
    
    //nsr
    
    for(int i=n-1;i>=0;i--)
    {
        if(s1.empty())
        nsr.push_back({-1,pseudoIndex});
        else if(s1.top().first<arr[i])
        nsr.push_back({s1.top().first,s1.top().second});
        else if(s1.top().first>arr[i]&&s1.size()>0)
        {
            while(s1.size()>0&&s1.top().first>arr[i])
            {
                s1.pop();
            }
            
            if(s1.empty())
            nsr.push_back({-1,pseudoIndex});
            else if(s1.top().first<arr[i])
            nsr.push_back({s1.top().first,s1.top().second});
        }
            
        s1.push({arr[i],i});
    }
    reverse(nsr.begin(),nsr.end());
    
    
    //width
    for(int i=0;i<n;i++)
    {
        width[i]= nsr[i].second - nsl[i].second -1;
    }
    
    //area
    for(int i=0;i<n;i++)
    area[i]=width[i]*arr[i];
    
    return area;
    
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> mat(n);
    vector<vector<int>> sum(n);
    vector<int> v(n);
    vector<int> area(n);
    
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>mat[i][j];
    
      for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cout<<mat[i][j];
    
    
   // vector<int> sum(n);
 
 /*   
    for(int i=0;i<n;i++)
    {
        //sum=0;
        for(int j=0;j<n;j++)
        {
            sum[i][j]+=sum[i][j];
            if(sum[i-1][j]==sum[i][j])
            sum[i][j]=0;
        }
        
        for(int k=0;k<n;k++)
        {
            v[k]=sum[i][k];
            cout<<v[k];
        }
        cout<<endl;
      
    }
    
/*    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cout<<mat[i][j];
  */  
   // area=mah(v,n);
    
  //  for(int i=0;i<n;i++)
   // cout<<area[i]<<" ";
    
    return 0;
}
