#include<bits/stdc++.h>
using namespace std;

int main(){
	int i1,i2;
	float f1,f2;
	string s1,s2;
	
	cout << "Enter integer 1 : ";
	cin >> i1;
	cout << "Enter integer 2 : ";
	cin >> i2;
	cout << "Enter float 1 : ";
	cin >> f1;
	cout << "Enter float 2 : ";
	cin >> f2;
	cout << "Enter string 1 : ";
	getline(cin,str1);
	cout << "Enter string 2 : ";
	getline(cin,str2);
	
	cout << "Integer + Integer : " << i1+i2;
	cout << "Float + Float : " << f1+f2;
	cout << "Float1 + Integer1 : " << f1+i1;
	cout << "String + String : " << str1+str2;

	return 0;
}
