#include<iostream>
using namespace std;

int gets_length(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        // '\0'  null character haa ya;
        count++;
    }
    return count;
}
int main(){
   char name[20];

    cout<<"Enter the string "<<endl;
    cin>>name;

    cout<<"!! here is your name"<<endl;
    cout<<name<<endl;

  cout<<"Lenth of the string "<< gets_length(name)<<endl;
    return 0;

    
}