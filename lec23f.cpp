// bonary search in row and coloum wise sorted array
#include<iostream>
using namespace std;

bool search_element( int arr[][3], int n , int m, int key){
   int rowindex = 0;
   int colindex = m -1;
   int element = arr[rowindex][colindex];
   while ( rowindex < n && colindex>=0){
      if (element == key){
        return 1;
      }
      else if ( element > key){
        colindex--;
      }
      else{
        rowindex++;
      }

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
    int ans = search_element( arr ,3, 3, 7);
    if ( ans==0){
    cout << "  element not found "<< endl;
}
else{
    cout<< " element found ";
}
}