#include<iostream>
using namespace std;
int main()
{

 int a=4;
 int b=5;
 cout<<"a&b is "<<(a&b) << endl ;
 cout<<"a|b is "<<(a|b) << endl ;
 cout<<"a^b is "<<(a^b) << endl ;


/*

left shift and right shift ;

generally  in the left shift if ' no. << 1'  then  number is multiplied by 2
if ' no. << 2 ' then number is mutiplied by 4;

In the right shift ' no >>2 ' number is divided by 4;
if rigth shifted once >>1 number is divided by 2 ;


*/

cout<<(15<<2)<<endl;
cout<<(15>>2)<<endl;
cout<<(15<<1)<<endl;
cout<<(15>>1)<<endl;

    return 0;

}