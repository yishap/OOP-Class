// WAP to demonstrate multiple catch and catch all.

#include <iostream>
using namespace std;

void test(int a)
{
    try
    {
        if (a == 0)
            throw a;
        else if (a == 1)
            throw 'a';
        else if (a == -1)
            throw 1.1;
        else
            cout << "No exception" << endl;
    }
    catch (int i)
    {
        cout << "Caught an integer" << endl;
    }
    catch (char c)
    {
        cout << "Caught a character" << endl;
    }
    catch (...)
    {
        cout << "Caught something else" << endl;
    }
}

int main()
{
    test(0);
    test(1);
    test(-1);
    test(2);
    return 0;
}