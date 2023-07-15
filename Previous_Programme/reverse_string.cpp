#include <iostream>
using namespace std;
void reverse_(char string[], int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        swap(string[start], string[end]);
        start++;
        end--;
    }
}
int get_length(char string[])
{

    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    // '\0'  null character haa ya;
    {
        count++;
    }
    return count;
}
int main()
{
    char string[40];
    cin >> string;

    int length = get_length(string);
     cout<<"Before swaping the string is  "<<string<<endl;

    cout << "Length of string  " << length << endl;
      reverse_(string , length);
    cout << " After Reversing of string is  " << string << endl;

    return 0;
}