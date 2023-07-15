
/* You are given a string 'S'. Your task is to check whether the string is palindrome or not. 
For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces
 
 S is not case sensetive;  upper case and lower case same ;

Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get 
S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.

*/

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
    // 
    else if(!((string[s]>='a' && string [s]<='z') )){
        s++;
    }
    else if(!((string[e]>='a' && string[e] <='z') )){
      e--;
    }
  
  else{
    return 0;
  }
   return 1;
}
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



