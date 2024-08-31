// spiral code
#include<iostream>
using namespace std;

void spiralprint( int arr[][3], int n , int m){
    
    int count = 0;
    int totalnum = n*m;
    int startingrow = 0;
    int endingrow= n-1;
    int startingcol = 0;
    int endingcol= m-1;


    while( count < totalnum){

      for (int i =startingcol ; count< totalnum && i <= endingcol; i++ ){
        // printing starting row
        cout << arr[startingrow][i]<< " ";
        count++;
      }
      startingrow++;
    
     for (int i = startingrow;count< totalnum && i <= endingrow; i++ ){
        // printing ending col
        cout << arr[i][endingcol]<< " ";
        count++;
      }
      endingcol--;
      for (int i =endingcol; count< totalnum &&i >= startingcol; i-- ){
        // printing ending row
        cout << arr[endingrow][i]<< " ";
        count++;
      }
      endingrow--;
      for (int i = endingrow; count< totalnum &&i >= startingrow; i-- ){
        // printing starting col
        cout << arr[i][startingcol] << " ";
        count++;
      }
      startingcol++;
}
}
int main(){
     int arr[3][3];

    cout << "elements of array is : "<< endl;

    for( int i = 0; i < 3 ; i++){
        for( int j = 0; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }
    spiralprint( arr ,3, 3);
   
}