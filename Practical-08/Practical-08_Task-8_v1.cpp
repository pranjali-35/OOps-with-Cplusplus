#include <iostream>
using namespace std;
void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Swap value in swap function " << a << " " << b << endl;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << "Value before swap " << a << " " << b << endl;
    swap(a,b);
    cout << "Value after swap value in main function " << a << " " << b << endl;
    return 0;
}
