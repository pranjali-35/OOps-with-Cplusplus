#include<iostream>
#include<bits/stdc++.h>
using namespace std; 


 long int fact(int n)
 {
  if(n==1)return n;
   return n*fact(n-1);
 }

int main()
{
  int num;
  cout << "Enter the number : "<<endl;
  cin >> num;
  cout << fact(num) << endl;
  return 0;
}
