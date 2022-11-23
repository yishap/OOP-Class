// WAP to throw and handle’ array out of bound’ exceptions.

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    cout << "Enter the index of the array: ";
    cin >> i;
    try
    {
        if (i > 4)
            throw "Array out of bound";
        else
            cout << "The value at index " << i << " is " << a[i] << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}