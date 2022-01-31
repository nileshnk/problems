#include <iostream>
using namespace std;

int pal(string s, int n, int i)
{
    if(n<=i)
    return 1;

    if(s[n-1]==s[i])
    return pal(s,n-1,i+1);
    else return 0;
}

int main() {

    string s;
    cin>>s;
    
    int n=s.size();
    int i=0;
    
    cout<<pal(s,n,i);
	return 0;
}
