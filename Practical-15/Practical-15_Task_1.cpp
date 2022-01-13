#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream myfile("myfile.txt");
    myfile<<"today is a pleasant day.";
    myfile.close();
    string s;
	ifstream readfile("myfile.txt");
	while(getline(readfile,s))
	{
	    cout<<s;
	}
	readfile.close();
	return 0;
}

