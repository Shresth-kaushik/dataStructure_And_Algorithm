/*
Here we are trying to implement the HEAP with STL :
*/

// MAX HEAP ==> Priority Queue default implementation is MAX



// C++ program to show that priority_queue is by
// default a Max Heap
#include <iostream>
#include<queue>
using namespace std;

// Driver code
int main ()
{
	// Creates a max heap
	priority_queue <int> pq;
	pq.push(5);
	pq.push(1);
	pq.push(10);
	pq.push(30);
	pq.push(20);

	// One by one extract items from max heap => elements are in decending order :
	while (pq.empty() == false)
	{
		cout << pq.top() << " ";
		pq.pop();
	}

    // Since elements are printed in descending order, we have a max heap by default.

	return 0;
}

