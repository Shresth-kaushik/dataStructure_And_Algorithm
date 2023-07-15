/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
 representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should 
be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 
 Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1. */



#include<iostream>
using namespace std;

   void merge_array(int num1[],int num2[], int num3[],int n,int m){
       int i=0;
       int j=0;
       int k=0;
       while(i<n && j<m){
           if(num1[i]<num2[j]){
               num3[k]=num1[i];
               i++;
               k++;

            // num3[k++]=num1[j++];
           }
           else{
               num3[k]=num2[j];
               j++;
               k++;
           }  
       }
    // coping first array ka remaning elements to third array;
     while(i<n){
         num3[k]=num1[i];
         i++;
         k++;
     }
     
    //  copying the elemnts of remaning second array;
     while(j<m){
          num3[k]=num2[j];
          j++;
          k++;
     }
     
   }

int main(){ 
    int num1[50],num2[40],num3[90],n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num1[i];
    }

    for (int j = 0; j <m; j++)
    {
        cin>>num2[j];
    }
    
    merge_array(num1,num2,num3,n,m);
    
    cout<<"Printing the merge array"<<endl;

    for(int k=0;k<(n+m);k++){
        cout<<num3[k]<<" ";
    }cout<<endl;

    return 0;
}
    
