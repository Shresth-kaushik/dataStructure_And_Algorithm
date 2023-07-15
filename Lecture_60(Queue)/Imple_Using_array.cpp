// #include <bits/stdc++.h> 
#include<iostream>
#include<queue>

class Queue {

private:
    int *arr;
    int size;
    int qfront;
    int rear;

public:
// Writing default statement that run after we made instance of class:
    Queue() {
      
      size=10001;
      arr=new int[100001];
      qfront=0;
      rear=0;

    }

    /*----------------- Public Functions of Queue -----------------*/
    
    bool isEmpty() {
        if(qfront==rear)
        return true;

        else 
        return false;


    }

    void enqueue(int data) {
        if(rear==size)
        cout<<"Queue is full";

        else
        {
            arr[rear]=data;
            rear++;
        }

    }

    int dequeue() {
       
       if(qfront==rear)
       return -1;

       else{
           int ans=arr[qfront];
           arr[qfront]=-1;
           qfront++;

           if(qfront==rear)
           {
               qfront=0;
               rear=0;
           }
           return ans;
       }

    }


    int front() {
         if(qfront==rear)
         return -1;
         else
         return arr[qfront];
    }
};

/*

7
1 17
1 23
1 11
2
2
2
2

*/

