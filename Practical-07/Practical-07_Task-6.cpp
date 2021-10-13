/*
          Task 6 : Restoring the reverse of the array and then printing it
     
            1   2   3                 9   8   7 
            4   5   6      =>      6   5   4
            7   8   9                 3   2   1
*/

#include <iostream>
using namespace std;

int main(){
     int N = 3;
     int arr[N][N];
     cout << "Enter the array elements row wise : " << endl;
     for(int i = 0 ; i < N ; i++){
          for(int j = 0 ; j < N ; j++)
               cin >> arr[i][j];
     }int i = 0, k = N-1;
     while(i < k){
          for(int j = 0;j < N; j++){
               swap(arr[i][j],arr[k][j]);
               i++;
               k--;
          }
     }
      for(int i = 0 ; i < N ; i++){
          for(int j = 0 ; j < N ; j++)
               cout << arr[i][j] << " ";
          cout << "\n";
      }
      return 0;
}    
