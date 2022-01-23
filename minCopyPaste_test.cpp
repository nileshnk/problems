#include <bits/stdc++.h>
using namespace std;

void push_backDemo(string str1, string str2);


void copystr(string s,int num)
{
    string str=s;
    cout<<endl<<str;
    
    for(int i=0;i<num;i++)
    {
        push_backDemo(s,str);
    }
    cout<<endl<<str;
    
}

void push_backDemo(string str1, string str2)
{
    // Appends character by character str2
    // at the end of str1
    for(int i = 0; str2[i] != '\0'; i++)
    {
        str1.push_back(str2[i]);
    }
    cout << "After push_back : ";
    cout << str1;
}

int gcd(int a)
{
    for(int i=a/2;i>1;i--)
    {
        if(a%i==0)
        return i;
    }
}

int solve(string s, int n)
{
    cout<<gcd(n)<<endl;
}



int main()
{
    string s;
    cin>>s;
    int n, res;
    cin>>n;

    copystr(s,n);
    res=solve(s,n);
    //cout<<res;
}
