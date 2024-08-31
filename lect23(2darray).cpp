// printring row wise sum
#include<iostream>
using namespace std;

void rowwisesum(int arr[][3], int n, int m){
    


    for(int i =0 ; i< n; i++){
            int sum = 0;
        for(int j=0; j < m; j++){
          sum = sum + arr[i][j];
        }
        cout<< sum << endl;

    }

}


int main(){

    int arr[4][3];

    cout << "elements of array is : "<< endl;

    for( int i = 0; i < 3 ; i++){
        for( int j = 0; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }
    rowwisesum( arr ,3, 3);
   


}