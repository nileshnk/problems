
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>
using namespace std;

int rainWaterTrapping(vector<int> arr,int n)
{
    
    vector<pair<int,int>> ngl;
    vector<pair<int,int>> ngr;
    stack<pair<int,int>> s,s1 ; 
    vector<int> width(n);
    int sum=0;
    
    int psuedoIndex=n;
    int psi=-1;
    
    
    
    //ngl
    
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        ngl.push_back({arr[i],psi});
        else if(s.top().first>arr[i])
        ngl.push_back({s.top().first,s.top().second});
        else if(s.size()>0 && s.top().first<=arr[i])
        {
            while(s.size()>0 && s.top().first<=arr[i])
            s.pop();
            
            if(s.empty())
            ngl.push_back({arr[i],psi});
            else if(s.top().first>arr[i])
            ngl.push_back({s.top().first,s.top().second});
        }
        
        s.push({arr[i],i});
        
    }
    
    
    //ngr
    
    for(int i=n-1;i>=0;i--)
    {
        if(s1.empty())
        ngr.push_back({arr[i],psuedoIndex});
        else if(s1.top().first>arr[i])
        ngr.push_back({s1.top().first,s1.top().second});
        else if(s1.size()>0 && s1.top().first<=arr[i])
        {
            while(s1.size()>0 && s1.top().first<=arr[i])
            s1.pop();
        
            if(s1.empty())
            ngr.push_back({arr[i],psuedoIndex});
            else if(s1.top().first>arr[i])
            ngr.push_back({s1.top().first, s1.top().second});
        }
        
        s1.push({arr[i],i});
    }
    reverse(ngr.begin(),ngr.end());


//6 4 1 3 2 4 1

//width
for(int i=0;i<n;i++)
{
    width[i]=ngr[i].second - ngl[i].second - 1;
}

//sum
for(int i=1;i<n-1;i++)
{
    sum+=(min(ngl[i].first,ngr[i].first) - arr[i])*width[i];
   // cout<<sum<<" ";
}

return sum;


    for(int i=0;i<n;i++)
    {
        cout<<width[i]<<" ";
    }
    cout<<endl;
/*    
6 
4 1 3 2 4 1
*/  
  
    return 1;
}



int main()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int res;
    
    res=rainWaterTrapping(v,n);
    cout<<res;
    
    
    return 0;
}
