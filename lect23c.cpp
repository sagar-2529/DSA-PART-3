#include<iostream>
using namespace std;

void waveprint( int arr[][3], int n, int m){
     int row = 0;
    for(int j =0; j<m ; j++ ){
          if ( row == 0){
        for(int i=0; i< n; i++){
            cout<< arr[i][j]<< "  ";
            row = i;
        }
          }
          else{
            for(int i=row; i>=0; i--){
            cout<< arr[i][j]<< "  ";
            row = i;

          }
    }
}
}
int main(){
     int arr[4][3];

    cout << "elements of array is : "<< endl;

    for( int i = 0; i < 4; i++){
        for( int j = 0; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }
    waveprint( arr ,4, 3);
   
}