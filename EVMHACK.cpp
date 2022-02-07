#include <bits/stdc++.h>
using namespace std;

void solve()
{
    //const int a,b,c,p,q,r;
    int x,y,z,l,m,n;
    
    cin>>x>>y>>z>>l>>m>>n;
    
    const int a=x,b=y,c=z,p=l,q=m,r=n;
    
    //cout<<max({a,b,c});
    float req=(p+q+r)/2;
    int maxx=max({p,q,r});
    float sum=a+b+c;
    
    if(sum<req)
    {
    //    if(max({p,q,r})+)
      
      switch(maxx)
      {
          case p:
          if(((b+c+p)/3)>req)
          {
              cout<<"YES"<<endl;
          }else cout<<"NO"<<endl;
          break;
          
          case q:
          if(((b+c+q)/3)>req)
          {
              cout<<"YES"<<endl;
          }else cout<<"NO"<<endl;
          break;
          
          case r:
          if(((b+c+r)/3)>req)
          {
              cout<<"YES"<<endl;
          }else cout<<"NO"<<endl;
          break;
          
      }
        
    }
    else cout<<"YES"<<endl;
    
    
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	solve();
	
	return 0;
}
