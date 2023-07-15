#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //   Copying of the main array to the new array:
    // copying in the first array 
    int mainArray_index = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArray_index++];
    }

// copying in the second array :

    mainArray_index = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArray_index++];
    }

    // Merge 2 sorted array :
    int index1 = 0;
    int index2 = 0;

    mainArray_index = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArray_index++] = first[index1++];
        }
        else
            arr[mainArray_index++] = second[index2++];
    }

    while (index1 < len1)
    {
        arr[mainArray_index++] = first[index1++];
    }

    while (index2 < len2)
    {

        arr[mainArray_index++] = second[index2++];
    }

// memory free bhi karni hai ::s
    delete[] first;
    delete[] second;
}

void merge_sort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;
    // sorting Left part ;
    merge_sort(arr, 0, mid);

    // sorting right part
    merge_sort(arr, mid + 1, e);

    // Merging ka liya
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {3, 2, 9, 7, 5};
    int n = 5;

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}