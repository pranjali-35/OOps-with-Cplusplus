/*WAP to create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square. Use multiple constructors to for the initialization.*/

#include<iostream>
using namespace std;
class area{
     public : 
       float a;
       float b;
       area(float x, float y)
       {
        a = x;
        b = y;
       }
       area(float x)
       {
        a = x;
        b = x;
       }
       void printArea()
       {
        cout << "Area is :" << a * b ;
       }
};
int main()
{
    area rectangle(10, 20);
    area sqaure(10);
    rectangle.printArea();
    sqaure.printArea();
    return 0;
}
