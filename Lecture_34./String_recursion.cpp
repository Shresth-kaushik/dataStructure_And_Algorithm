/*
Ques::
We have to reverse the string using the recurssion 
for example : given string --> "babber"
o/p string ---> "rebbab"


hmna phela ya loops say solve kar rakhya hai:
we taken two pointer i,j;
point "i" to the first and "j" at the end
while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}
But now through recurssion;
*/

#include<iostream>
using namespace std;
// pass by reference so that changes can be done in the string itself:
void reverse(string &name,int start,int end)
{
    // start and end are the index ::
    if(start > end)
    return ;
//   Base case 
   swap(name[start],name[end]);
   start++;
   end--;
  return reverse(name,start,end);


}
int main()
{
string name="deepanshu";
reverse(name,0,name.length()-1);
cout<<endl;
cout<< name<<endl;
return 0;
}