#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main()
{
    unordered_map<string,int> marks;
    unordered_map<int,string> name;

    marks.insert({"nilesh",6});
    marks.insert({"nisha",5});
    bool ok = marks.insert({"daraksha",8}).second;
    cout<<ok<<endl; 
    cout<<marks.empty()<<endl;
    cout<<marks.size()<<endl;
    cout<<marks.max_size()<<endl;
    //int okk = marks.find(nilesh);
    //cout<<marks.

    name.insert({27,"nilesh"});
    name.insert({10,"daraksha"});
    name.insert({50,"shivani"});

    int n;
    cout<<"enter roll no. : ";
    cin>>n;
    cout<<"Roll\tName"<<endl;
    
    cout<<n<<"\t"<<name.at(n)<<endl;

}