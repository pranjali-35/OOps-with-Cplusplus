/*WAP in which you can add two objects [every object would have 1 integer value] by overloading + operator, which eventually would add the data values of those two object by adding the objects.*/

#include<iostream>
using namespace std;

class abc{
	int num;
	public:
	abc(int x){
		this->num=x;
	}
	void operator +(abc obj){
		cout << num+obj.num << endl;
	}
};

int main()
{
  	abc obj(10);
  	abc obj1(20);
  	obj+obj1;
}
