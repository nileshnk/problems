#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float num,temp;
    cin>>num;
    temp=num;
    int top=ceil(num);
    
    float frac, whole;
    int i;
    
    for(i=1;i<100;i++)
    {
        temp=temp*i;
        
        frac=modf(temp,&whole);
        
        if(frac>0.9999||frac==0)
        break;
        
        
    }
    cout<<ceil(num*i)<<"/"<<i;
}
