#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream myfile;
   
	myfile.open("myfile.txt", ios::app);
    if (!myfile) {
		cout << "File not created!";
	}
	else {
		cout << "File appended successfully!";
		myfile << "\nIt's a pleasant day.";
		myfile.close();
	}
	return 0;
}

