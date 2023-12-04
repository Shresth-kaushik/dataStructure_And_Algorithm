 #include <iostream>

using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    int l=s.size();
    if(l<2)
    {
        cout<<"String is not Accepted"<<endl;
    }
    else{
        if(s[0]=='a' && s[l-1]=='b'){
        int i=0;
        while(s[i]=='a')
        {
            i++;
        }
        while(s[i]=='b')
        {
            i++;
        }
        if(i==l){
            cout<<"String is Accepted"<<endl;
        }
        else{
            cout<<"String not Accepted"<<endl;
        }
        }
        else{
        cout<<"String not Accepted"<<endl;
        }
    }
    
     return 0;
}