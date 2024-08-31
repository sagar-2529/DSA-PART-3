// printring largest row of sum 
#include<iostream>
using namespace std;

void rowwisesum(int arr[][3], int n, int m){
    
   int largestsum = 0;
   int rowindex = -1;
   

    for(int i =0 ; i< n; i++){
             int sum = 0;
        for(int j=0; j < m; j++){
          sum = sum + arr[i][j];

          if ( sum > largestsum){
            largestsum = sum;
             rowindex = i;
          }
          

        

        }
        

    }
    cout<<" maximum sum of row is : "<<  largestsum << " at index : "<< rowindex<< endl;
    

}

int main(){

    int arr[3][3];

    cout << "array is : "<< endl;

    for( int i = 0; i < 3 ; i++){
        for( int j = 0; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }
    rowwisesum( arr ,3, 3);
   


}