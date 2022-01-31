#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	vector<int> v;
	stack<int> s;
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=n-1;i>=0;i--)
	{
	    if(s.empty())
	    {
	        v.push_back(-1);
	        
	    }
	    else if(s.top()>arr[i])
	    {
	        v.push_back(s.top());
	        s.push(arr[i]);
	    }
	    else if(s.top()<=arr[i]){
	        
	       // if(s.empty())
	        
	        while(s.size()>0&&s.top()<=arr[i])
	        {
	            s.pop();
	        }
	         if(s.empty())
	            {
	                v.push_back(-1);
	            }
	            else {
	                v.push_back(s.top());
	            }
	        
	    }
	    
	    s.push(arr[i]);
	}
	
	reverse(v.begin(),v.end());
	
	for(int i=0;i<n;i++)
	cout<<v[i]<<" ";
	
	
	return 0;
}
