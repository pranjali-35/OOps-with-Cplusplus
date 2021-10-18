#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    int **q;
    q = &(&a);                         // error  :  lvalue required as unary '&' operand
    
    return 0;
}
