#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
        
    stack<int> s;
    vector<int> v;
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            v.push_back(-1);
            //s.push(arr[i]);
        }
        else if(s.top()<arr[i])
        {
            v.push_back(s.top());
            
        }
        else if(s.top()>=arr[i]&&s.size()>0)
        {
            while(s.size()>0&&s.top()>=arr[i])
            {
                s.pop();
            }
            if(s.empty())
            v.push_back(-1);
            else if(s.top()<arr[i])
            {
                v.push_back(arr[i]);
            }
        
        }
        
        s.push(arr[i]);
        
        
    }
    
    for(int i=0;i<n;i++)
    cout<<v[i];
    

	return 0;
}
