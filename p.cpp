#include<iostream>
using namespace std;




 int countzeros( int arr[][3], int n , int m){
   int count =0 ;
   for(int i=0 ; i< n; i++){
    for(int j=0; j< m; j++){
        if(arr[i][j] != 0){
            count++;
        }
    }
   }
   return count;
 }
 int countrows(int arr[][3],int n, int m){

 int count2 = 0;
 int row = 0;
 int count =0;
 while(count2< n*m){
    for(int i=0 ; i< m; i++){
        count2++;
        if(arr[row][i] == 0){
            count ++;
          
            break;
        }
    }
      row++;

 }
 return count;
 
}
int main(){
    int arr[3][3];
    for(int i=0 ; i< 3; i++){
    for(int j=0; j< 3; j++){

        cin >> arr[i][j];
        

        }
    }
    int ans= countzeros(arr, 3,3);
    int ans2= countrows(arr,3,3);
    cout<< ans << endl;
    cout<< ans2;
    
}