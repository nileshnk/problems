#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <utility>
using namespace std;

//stock span problem
//nearest greater to left

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
    stack<pair<int,int>> s;
    vector<pair<int,int>> v;
	
	for(int i=0;i<n;i++)
	{
	    if(s.empty())
	    {
	        v.push_back(make_pair(-1,i));
	    }
	    else if(s.top().first>arr[i])
	    {
	        v.push_back(make_pair(s.top().first,i));
	    }
	    else if(s.size()>0&&s.top().first<arr[i])
	    {
	        
	        while(s.size()>0&&s.top().first<arr[i])
	        {
	            s.pop();
	        }
	        if(s.empty())
	        {
	            v.push_back(make_pair(-1,i));
	        }else v.push_back(make_pair(s.top().first,i));
	    }
	    s.push(make_pair(arr[i],i));
	}
	
	for(int i=0;i<n;i++)
	cout<<v[i].first<<"\t"<<v[i].second<<endl;
	
	return 0;
}
