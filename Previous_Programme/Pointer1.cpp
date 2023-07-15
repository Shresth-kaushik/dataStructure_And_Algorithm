#include<iostream>
using namespace std;
int main()
{
    /*
    int num=12;
    int *ptr= &num;
    cout<<num <<endl;
    cout<< ptr<<endl;

    // derefersing :: *ptr prints the value present at the adderess present in the ptr;
    cout<<(*ptr)<<endl;

*/

/*
int temp[10]={1,3,5,7};
cout<<sizeof(temp)<<endl ;
 
int *ptr = &temp[0];
cout<< sizeof(ptr)<<endl;
cout<<sizeof(&ptr)<<endl;
cout<<sizeof(*ptr) +1 <<endl;

*/

// CHARACTER ARRAY :: 

char ch[6]="abcdf";
int arr[5]={1,2,5,6};

cout<<ch<<endl;
cout<<arr<<endl;

char *c =&ch[0];
cout<<ch<<endl;





return 0;

}