#include <iostream>
using namespace std;
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void swaparr(int arr[], int a, int n)
// {
//     while (a < (n - 1))
//     {
//         int temp = arr[a];
//         arr[a] = arr[a + 1];
//         arr[a + 1] = temp;
//         a = a + 2;
//     }
// }

void swaparr(int arr[],int a ,int n){

  while(a < n-1) {
   swap(arr[a],arr[a+1]);
    a=a+2;
    }
}
int main()
{
    int arr[50], n, a;
    cout << "enter the size of array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swaparr(arr, 0, n);
    cout << "After reversing alternately the final array" << endl;

    printarr(arr, n);
    return 0;
}