#include<iostream>
using namespace std;

bool rest(string str,int s,int l){
    for(int i=s;i<l;i++){
    if(str[i]!='b'){
        return 1;
    }
    }
  return 0;
}
//a*,a*b+,aab
bool checkvalidation(string s,int l){

//case3
if(s.size()==3 && s[0]=='a' && s[1]=='a' && s[2]=='b' ){
    return 0;
}

if(l==1 && s[0]=='b')
return 0;

//case2

for(int i=0;i<l;i++){

if(s[i]=='b')
return rest(s,i+1,l);

}

//case1
for(int i=0;i<l;i++){

if(s[i]!='a'){
   return 1;
   break;
}

}
return 0;
}
int main()
{
string str;
cout<<"Enter the string::"<<endl;
getline(cin,str);

int len=str.size();

int ans=checkvalidation(str,len);

if(ans==1)
 cout<<"String is not recognised";
else
 cout<<"String is recognised";
return 0;
}
