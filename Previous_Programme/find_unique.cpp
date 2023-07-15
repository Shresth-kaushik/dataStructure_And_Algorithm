#include<iostream>
#include<math.h>
using namespace std;

 int find_unique(int arr[], int size){
    int ans=0;

    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    // ^ concept
    //  a^a==0  and 0^a=a
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  int solution =  find_unique(arr,n);
  cout<<"The unique element is  "<< solution <<endl;
   
   return 0;
}

/*     Unique number of occurance : 
        
  Example : -3,0,1,-3,10,0,1,1,1,-3
   here -3 occurs  3 times;
          0 --> 2 times 
          1---> 4 times
          10 --> 1 time
        arr[]={2,4,1,3}
        unique elements are int the array  therefor return  true else false :
    
     

 int i = 0;
        sort(arr.begin(),arr.end());
        vector<int> ans;
        while (i < arr.size()){
            int count = 1;
            for (int j = i+1; j< arr.size(); j++){
                if (arr[i] == arr[j])
                    count++;
            }
            ans.push_back(count);
            i = i + count; 
        }
        sort(ans.begin(),ans.end());
        for (int i = 0; i < ans.size() - 1; i++){
            if (ans[i] == ans [i+1])
                return false;
        }
        return true;
    }
};*/