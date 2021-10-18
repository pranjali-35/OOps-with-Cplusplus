#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int i;
    cout<< "press 1 for time 2 for date 3 for month 4.year"<<endl;
    cin>> i; 
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);
    switch (i)
    {
	case 1:
	        cout <<  "Current  time is : " << 1+ local_time->tm_hour<<":"<<1+ local_time->tm_min <<":"<<1+ local_time->tm_sec << endl;
	        break;   
	   case 2:
	   cout << "Current Date is: "<< local_time->tm_mday << endl;
	   break;
	   case 3:
	   cout << "Current month is: "<< 1+  local_time->tm_mon;
	   break;
	   case 4:
	   cout << "Current year is: "<<1900 + local_time->tm_year;
	   break;
	   default:
	   break;
	   }
	return 0;
}
