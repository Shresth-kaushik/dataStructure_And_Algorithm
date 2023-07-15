// We have to check that the string is palindrome or not ;
    // no special character
/* if we have to convert the lower case in into the upper case  then
ch -'A' +a;

U ---> L ;
ch- 'a'+'A' ;
*/

//  in this code we consider the only number and character not the special character .
#include <iostream>
using namespace std;
//  ya tabi valid jab mention ho ke string case sensetive  ha
char to_lowercase(char ch){
    if(ch >='a' && ch <='z'){
      return ch ;
    }
    else{
      char temp=ch-'A'+'a';
      return temp;
    }
}
bool check_palindrome(char string[],int length){
    int s=0;
    int e=length-1;
    while(s<=e){
    if(to_lowercase(string[s])!=to_lowercase(string[e])){
         return 0;
    }
    else if(to_lowercase(string[s])==to_lowercase(string[e])){

        s++;
        e--;
    }
  }
   return 1;
}

int get_length(char string[]){
  int count=0;
  for(int i=0;string[i]!='\0';i++){
      count++;
  }
  return count ;
}
int main(){
    char string[40];
    cin>>string;
     
   int length=get_length(string);
   cout<<"Length of the string " <<length<<endl;
  //  check_palindrome(string,length);
  // 1 for yes the number is palindrome and 0 for not a palindrome ;  
   cout<<"Palindrome ::"<<check_palindrome(string,length)<<endl;
    return 0;
   
}



