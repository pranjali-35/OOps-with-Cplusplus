#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'a';
    }
    catch (int x)
    {
        cout << "caught" << x << "\n";
    }
    return 0;
}

/*
Reason : Since no matching catch handler is found, the exception is uncaught, and the run-time call to std::terminate is made as for uncaught exception.
*/
