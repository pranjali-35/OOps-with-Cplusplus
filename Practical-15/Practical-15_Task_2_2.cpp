#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    fstream myfile;
    myfile.open("myfile.txt", ios::out);
    if (!myfile) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		myfile << "Anshika is a good girl!";
		myfile.close();
	}
	return 0;
}
