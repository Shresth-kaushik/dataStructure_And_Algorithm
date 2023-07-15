#include<iostream>
using namespace std;
bool check_pn(string name ,int s,int e)
// Here We can not consider the capital letter as well as special character ,
// Example: We are comparing the Capital letter to Capital , Small to the Small Letter, Special to the special
// Character of the string 
{
  if(s>e)
  return true;

  if(name[s]!=name[e])
  return false;

  else{ 
 return check_pn(name,s+1,e-1);
  }

}

int main()
{
   //  string name="bookkoob";
   // string name="KanaK";
   string name="K@n@K";
 bool ans =  check_pn(name,0,name.length()-1);
 cout<<endl;

if(ans)
cout<<"Sting is palindrome"<<endl;
else
cout<<"String is not palindrome"<<endl;

cout<<endl;
   return 0;
}