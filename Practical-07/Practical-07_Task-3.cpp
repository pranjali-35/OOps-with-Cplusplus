#include<iostream>
using namespace std;

int main(){
     int N = 3;
     int arr[N][N];
     cout << "Enter the elements of a 3X3 matrix row wise : " << endl;
     for(int i = 0 ; i < N ; i++){
          for(int j = 0 ; j < N ; j++)
               cin >> arr[i][j];
     }cout << "Reversed array is : " << endl;
     for(int i = N-1 ; i >= 0 ; i--){
          for(int j = N-1 ; j >= 0 ; j--)
               cout << arr[i][j] << " ";
          cout << "\n";
     }
     return 0;
}
