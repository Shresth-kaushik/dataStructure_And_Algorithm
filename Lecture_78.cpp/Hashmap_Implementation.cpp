#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{

    // creation of the unorderd map:
    unordered_map<string,int> m;
    
    // insertion :
    // 1.In form of the pair :
    pair<string,int>p=make_pair("babber", 3);
    m.insert(p);

    pair<string,int>p2("love",2);
    m.insert(p2);

    // 2.Directly :
    m["mera"]=1;

//   Updation of the value => Unique key value pair must be present :
    m["mera"]=2;

// searching :
cout<<m["love"]<<" "<<endl;
cout<<m.at("babber")<<endl;


// Searching the unknown key :

// cout<<m.at("unknown")<<endl;
cout<<m["unknown"]<<endl;
cout<<m.at("unknown")<<endl;


unordered_map<string,int>:: iterator it=m.begin();
while(it!=m.end())
{
    cout<<it->first <<" " << it->second <<endl;
    it++;
}


    return 0;
}