// How to implement Min Heap? 
// 1. priority_queue supports a constructor that requires two extra arguments to make it min-heap. 
// 2. priority_queue <Type, vector<Type>, ComparisonType > min_heap;
// 3. The third parameter, ‘Comparison Type’ can either be a function or functor (aka function object)
//  that must have bool as return-type and must have 2 arguments.

// C++ program to use priority_queue to implement min heap
#include <iostream>
#include<queue>
using namespace std;

// Driver code
int main ()
{
	// Creates a min heap
    // priority_queue <Type, vector<Type>, ComparisonType > min_heap;
	priority_queue <int, vector<int>, greater<int> > pq;
	pq.push(5);
	pq.push(1);
	pq.push(10);
	pq.push(30);
	pq.push(20);

	// One by one extract items from min heap
	while (pq.empty() == false)
	{
		cout << pq.top() << " ";
		pq.pop();
	}

	return 0;
}
