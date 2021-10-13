#include<iostream>
using namespace std;

int main(){
     int year, month, date;
     cin >> year >> month >> date;
     
     int choice;
     cout << "Enter your choice  :\n1.Get year\n2.Get month\n3.Get date\n" << endl;
     cin >> choice;
     
     switch(choice){
          case 1:
                    cout << "Year : " << year << endl;
                    break;
          case 2:
                    cout << "Month : " << month << endl;
                    break;
          case 3:
                    cout << "Date : " << date << endl;
                    break;
         default:
                    cout << "Enter a valid choice" << endl;
       }
       return 0;
}
