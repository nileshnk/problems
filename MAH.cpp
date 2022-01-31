//MaximumAreaHistogram

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> fun(int arr[], int n)
{
    vector<pair<int,int>> nsl;
    vector<pair<int,int>> nsr;
    vector<int> width(n);
    vector<int> area(n);
    stack<pair<int,int>> s;
    stack<pair<int,int>> s1;
    int temp;
    int pseudoIndex=n;
    //nsl
    int psi=-1;
   
   for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            nsl.push_back({-1,psi});
            //s.push(arr[i]);
        }
        else if(s.top().first<arr[i])
        {
            nsl.push_back({s.top().first,s.top().second});
            
        }
        else if(s.top().first>=arr[i]&&s.size()>0)
        {
            while(s.size()>0&&s.top().first>=arr[i])
            {
                s.pop();
            }
            if(s.empty())
            nsl.push_back({-1,psi});
            else if(s.top().first<arr[i])
            {
                nsl.push_back({s.top().first,s.top().second});
            }
        
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
            while(s1.size()>0&&s1.top().first>arr[i])//&&s1.size()>0)
            s1.pop();
        
        if(s1.empty())
        nsr.push_back({-1,pseudoIndex});
        else if(s1.top().first<arr[i])
        nsr.push_back({s1.top().first,s1.top().second});
        }
        s1.push({arr[i],i});
    }

    reverse(nsr.begin(),nsr.end());
    
    //---------------
    //width
    
    for(int i=0;i<n;i++)
   {
        width[i]=nsr[i].second - nsl[i].second - 1;
   }
    
    for(int i=0;i<n;i++)
   {
       area[i]=width[i]*arr[i];
   }
    
    return area;

    
}

int main() {

	vector<int> res;
	int n;
	cin>>n;
	
//	vector<int> arr(n);
    int arr[n];
    
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	res=fun(arr,n);
	
	for(int i=0;i<n;i++)
	{
	    cout<<res[i]<<" ";
	    
	}
	
	return 0;
}