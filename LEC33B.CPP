#include<iostream>
using namespace std;

int sum_of_array( int *arr , int n){
    int sum = 0; 
    if ( n == 0){
        return 0;
    }
    if ( n == 1){
        return arr[0];
    }
    sum = sum_of_array( arr+1 , n-1) + arr[0];
   
     return sum;
}
int main(){
     int n;
    cin >> n;
    int *arr = new int [n];

    for (int i= 0; i< n; i++){
        cin >> arr[i];
    }
     int ans = sum_of_array(arr, n);
     cout << " sum of array "<< ans;

     delete arr;
    
}
