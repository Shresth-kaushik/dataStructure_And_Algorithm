#include<iostream>
using namespace std;
long long int findsqrt(int n){  
     int start =0;
     int end=n;
     int ans;
     long long int mid=(start+end)/2;
     while(start<=end){
     int square=mid*mid;

     if(square==mid){
           return  mid;
           break;
     }
     if(square<n){
         ans=mid;
         start=mid+1;
     }
     else {
         end=mid-1;
     }
     mid=(start+end)/2;
     }

     return ans;
}
int main(){
    int n;
    cin>>n;
    findsqrt(n);
    cout<<"The square root of "<< n <<" had value "<< findsqrt(n)+1;
    return 0;
}



// C++ implementation to find
// square root of given number
// upto given precision using
// binary search.


// #include <iostream>
// using namespace std;

// // Function to find square root
// // of given number upto given
// // precision
// float squareRoot(int number, int precision)
// {
// 	int start = 0, end = number;
// 	int mid;

// 	// variable to store the answer
// 	float ans;

// 	// for computing integral part
// 	// of square root of number
// 	while (start <= end) {
// 		mid = (start + end) / 2;
// 		if (mid * mid == number) {
// 			ans = mid;
// 			break;
// 		}

// 		// incrementing start if integral
// 		// part lies on right side of the mid
// 		if (mid * mid < number) {
// 			start = mid + 1;
// 			ans = mid;
// 		}

// 		// decrementing end if integral part
// 		// lies on the left side of the mid
// 		else {
// 			end = mid - 1;
// 		}
// 	}

// 	// For computing the fractional part
// 	// of square root upto given precision
// 	// float increment = 0.1;
// 	// for (int i = 0; i < precision; i++) {
// 	// 	while (ans * ans <= number) {
// 	// 		ans += increment;
// 	// 	}

// 	// 	// loop terminates when ans * ans > number
// 	// 	ans = ans - increment;
// 	// 	increment = increment / 10;
// 	// }
// 	return ans;
// }

// // Driver code
// int main()
// {
// 	// Function calling
// 	cout << squareRoot(36, 3) << endl;

// 	// Function calling
// 	cout << squareRoot(25, 4) << endl;

// 	return 0;
// }

