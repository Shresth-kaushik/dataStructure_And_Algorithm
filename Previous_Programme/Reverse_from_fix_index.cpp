
/* Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:
We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}.*/


#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>&v,int m){
     int start=m+1;
     int end= v.size()-1;
     while(start<=end){
         swap(v[start],v[end]);
         start++;
         end--;
     }
     return v;
}
int main(){
        
        vector<int>v;
        // int n =v.size();
        //   cin>>n;
        // for(int i=0;i<n;i++){
        //     cin>>v[i];
        // }

        v.push_back(2);
        v.push_back(5);
        v.push_back(4);
        v.push_back(9);
        v.push_back(8);

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
       int m;
       cout<<"Enter the position after which the array is reversed"<<endl;
       cin>>m;
 
       vector<int>ans=reverse(v,m);
      
      for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
      }
      cout<<endl;

      return 0;
}