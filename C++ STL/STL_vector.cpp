#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v ;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
  
  v.pop_back();
  for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

  vector<int>v2(3,40);

  swap(v,v2);

for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

   for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }cout<<endl;

    sort(v2.begin(), v2.end());
    
     for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }cout<<endl;
     
     cout<<"Size "<<v.size()<<endl;
     cout<<"Max. Size "<<v.max_size()<<endl;

       

    return 0;
}

/*
ya default hota ha ;;; elements always maximum nikla ga : 
max heap :: how to define:
priority_queue<data type> name;
name.push(value);


min heap :
priority_queue<int,vector<int>,greater<int> > name:
 name.push(value);


IN MAPS our data is stored in the form of key value 
particular key points to a particular value 

A single key can not points to "2" values
map<int ,string >m;  



### Algo:: 

vector<int>v
v.push_back(3)
v.push_back(2)
v.push_back(4)
v.push_back(5)
v.push_back(6)

if we have to apply binary search :

binary_search(v.begin(),v.end(),5)
-->Output 1
as the 5 is present in the vector
*/