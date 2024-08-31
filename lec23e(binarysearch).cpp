// binary search in 2d array
#include<iostream>
using namespace std;

bool binarysearch( int arr[][3], int n , int m, int key){
    int s = 0 ;
    int e = n*m - 1;
    int mid = s + (e - s)/2;
    while ( s <= e ){
        if ( arr[mid/m][mid%m]== key){
            return 1;
        }
        else if ( key > arr[mid/m][mid%m] ){
            s = mid + 1;
        }
        else{
            e =  mid -1;
        }
        mid = s + (e - s)/2;
    }
    return 0;
}
int main(){
     int arr[3][3];

    cout << "elements of array is : "<< endl;

    for( int i = 0; i < 3 ; i++){
        for( int j = 0; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }
    int ans = binarysearch( arr ,3, 3, 7);
    if ( ans==0){
    cout << "  element not found "<< endl;
}
else{
    cout<< " element found ";
}
}