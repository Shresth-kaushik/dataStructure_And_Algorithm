/*   pair <data type ,data type>name ;   ---> yaha pair ke jagah container bhi aa skta ha 
 value kasa dalta ha pair mai :

  name = make_pair(pheli value , dusri value);
  How to print it :
   name.first  //  name.second  ; 
If we use the reference then value can be change if we update it 
Ex:
pair< > &p1=p; 


#VECTOR: 
Dynamic array whose size can be changed accordingly :
vector<int>v;
vector<pair<int,int>> v={{1,2},{1,5},{3,5}};
v.push_back(element);

vector<int>V(10,3)     ## Means the size of he vector is 10 and all elements have value 3;
vector<string>v;


vector<int>v={1,4,5,2,7};
// ### range based loops 
for(int value : v){
    cout<<value<<" ";
}
cout<<endl;  


###
map :::: 
map<int,sting>m;


*/
// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
// passing the actula vector: 
void printvector(vector<int>&V){
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // pair<int,string>p;
    // p=make_pair(12,"Ankit");
    // // p={12,"ANkit "}  ya bhi same output dega :
    // cout<<p.first <<" " <<p.second<<endl;



// vector<int>V;
// cout<<"Enter the elements for vector"<<endl;
// for(int i=0;i<4;i++){
//     int x;
//     cin>>x;
//     V.push_back(x);
// }
// printvector(V);
 
    return 0;
}
    

