#include<iostream>
#include<list>
using namespace std;

void display(list<int>l)
{
    for(auto it=l.begin(); it!= l.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int>l1;
    for(int i=1;i<=10;i++){
     l1.push_back(i);    
    }
    display(l1);
    cout<<"First Element of the list " <<l1.front()<<endl;


    // l1.size()
    // l1.resize(4)
    // l1.empty()
    // max_size()
    // l1.insert(l2.begin(), times : 2, value : 10);
    // l1.clear(); --> ddelete all elements ;
    
    // 
    return 0;
}


/*  List do not support the random excess iterator .
 

*/