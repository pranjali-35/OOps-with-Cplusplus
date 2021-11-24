/*Write an Efficient code to check if a number is prime or not?*/

#include <iostream>
using namespace std;

int main()
{
  int n, i , m=0, flag=0;
  cout << "Enter the number to check Prime: ";
  cin >> n;
  m=n/2;
  if(n==1){
    cout<<"Number is not Prime."<<endl;
    return 0;
  }for(i = 2 ; i <= m; i++)
  {
    if(n % i == 0)
    {
      cout <<"Number is not Prime." << endl;
      flag=1;
      break;
    }
  }
  if(flag==0)
    cout << "Number is Prime." <<endl;
  return 0;
}
