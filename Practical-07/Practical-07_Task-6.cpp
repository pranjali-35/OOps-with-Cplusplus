/*
          Task 6 : Restoring the reverse of the array and then printing it
     
            1   2   3                 9   8   7 
            4   5   6      =>         6   5   4
            7   8   9                 3   2   1
*/

#include <iostream>
using namespace std;

int main()
{
    int N = 3;
    int arr[N][N];
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++)
            cin >> arr[i][j];
    }
    
    //Swaping rows
    int i = 0, k = N-1;
    while(i <= k){
        for(int j = 0 ; j < N ; j++){
            swap(arr[i][j],arr[k][j]);
        }i++;
        k--;
    }
    
    //Swaping columns
    int y = 0, z = N-1;
    while(y <= z){
        for(int x = 0 ; x < N ; x++){
            swap(arr[x][y],arr[x][z]);
        }y++;
        z--;
    }
    
    //Printing the final array
    cout << "\nFinal array : " << endl;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

