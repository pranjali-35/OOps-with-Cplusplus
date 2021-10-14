/*
                                                                              Print the following pattern
                                                                               
                                                                                        * * * *
                                                                                          * * *
                                                                                            * *
                                                                                              *
*/

#include<iostream>
using namespace std;

int main(){
     int N;
     cout << "Enter the number of rows : " << endl;
     cin >> N;
     char arr[N][N];
     for(int i = 0 ; i < N ; i++){
          for(int j = 0 ; j < N ; j++){
               if(i <= j)
                    arr[i][j] = '*';
               else
                    arr[i][j] = ' ';
          }
     }
     //Printing the array
     for(int i = 0 ; i < N ; i++){
          for(int j = 0 ; j < N ; j++)
               cout << arr[i][j] << " ";
          cout << "\n";
      }
     
     
     return 0;
}     
