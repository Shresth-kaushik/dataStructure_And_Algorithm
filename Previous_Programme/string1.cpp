#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="56832027509";
    // hama ess no. say jo amximum number haa vo nikalana hai,
    sort(s.begin(),s.end());
    cout<<s<<endl;

     string  s1;
     s1=s;
    reverse(s1.begin(),s1.end());
    // reverse esliya kyuke jo hma maximum number chiya inc--> dec like hoga ;

    cout<<s1<<endl;
    return 0;

}

/*
character array ::
  char ch[10]; 
  ch={a,b...i};

  cin>>ch;

  jaha bhi input ktm ho jaya gay uska bad null character store hoga "/0";;
  which shows the terminating condition :
  cin>>> Does not consider the --> tab ,space,enter :
  

*/